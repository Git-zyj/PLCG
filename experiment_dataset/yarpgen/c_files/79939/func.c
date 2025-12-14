/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79939
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) var_4);
                            arr_11 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)82), ((unsigned char)85))))))), (max((min((var_3), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */short) var_0)))))))));
                            var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned char)79)), (17628493536058659874ULL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((var_4), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))))))));
                arr_12 [(short)4] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(var_2)))), (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_3)))), ((-(var_9)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (var_9))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_16 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57591)))), (min((((/* implicit */unsigned long long int) var_3)), (var_5)))));
                    arr_21 [i_6] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_9)), (var_5)))));
                    arr_22 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((min((min((((/* implicit */unsigned long long int) var_3)), (var_5))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))))) < (var_5)));
                    var_17 = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
}
