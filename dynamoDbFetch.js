dynamoDbFetch(body, table) {
        return new Promise((resolve, reject) => {
          let response = {};
          var params = {
            TableName: table,
            Key: body,
          };
          dynamoDb.get(params, (err, data) => {
            if (err) {
              response["isDataAvailable"] = false;
              response.data = err;
              response["message"] = "Error - fetch data from DB";
              resolve(response);
              return;
            } else {
              if (isEmptyObject(data) > 0) {
                response["isDataAvailable"] = true;
              } else {
                response["isDataAvailable"] = true;
              }
              response.data = data;
              response["message"] = "Success";
              resolve(response);
              return;
            }
          });
        });
      }
