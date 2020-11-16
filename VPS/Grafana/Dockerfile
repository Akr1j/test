FROM grafana/grafana

#COPY datasource.yml ../

# Disable Login form or not
ENV GF_AUTH_DISABLE_LOGIN_FORM "true"
# Allow anonymous authentication or not
ENV GF_AUTH_ANONYMOUS_ENABLED "true"
# Role of anonymous user
ENV GF_AUTH_ANONYMOUS_ORG_ROLE "Admin"

ENV GF_LOG_MODE "file"
# Install plugins here our in your own config file
# ENV GF_INSTALL_PLUGINS="<list of plugins seperated by ,"

# Add provisioning
ADD Grafana/provisioning /usr/share/grafana/conf/provisioning
# Add configuration file
ADD Grafana/grafana.ini /usr/share/grafanagrafana.ini
# Add dashboard json files
ADD Grafana/provisioning/dashboards /usr/share/grafana/dashboards