#!/bin/bash
docker build ./init/common-capi -t common-capi
docker build ./init/common-bottle -t common-bottle
docker-compose build