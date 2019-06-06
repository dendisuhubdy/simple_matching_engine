for (( c=1; c<=1000; c++ ))
do
    curl -d "{ \"symbol\": \"BTCUSD\", \"quantity\": 30, \"price\": 20000, \"side\": 1 }"  -X POST http://202.149.70.100:8000/insertorder
done
