/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60873
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
    var_20 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) 1565815542)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */int) arr_4 [(unsigned short)4] [8LL] [8LL])) / (arr_0 [i_1] [i_0]))) : (((/* implicit */int) var_17)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned short) var_8);
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_13)) / (arr_11 [i_0 - 1] [i_0] [i_0] [2] [i_0 - 1] [i_0]))) : (((/* implicit */int) var_7)))) > (((/* implicit */int) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_10)))) != (((/* implicit */int) arr_5 [i_4 + 2])))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((int) ((long long int) (short)20525))) : (min((-1377468987), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))));
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            arr_24 [i_5] [17] [i_5] [i_5] = ((/* implicit */unsigned short) ((signed char) var_13));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((signed char) arr_13 [i_5])))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_5) : (var_5))) * (((/* implicit */int) arr_20 [i_5] [i_8]))))) ? (((arr_19 [i_6 - 1] [i_7] [i_7 - 2] [i_7 - 3]) & (((var_12) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_7 - 3] [i_7 - 3] [i_7 + 2] [i_7 + 2])) ? (((((/* implicit */int) var_19)) & (var_1))) : (((/* implicit */int) ((signed char) var_2))))))));
                            var_27 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_20 [i_6 - 2] [i_7 - 1])) > (((((/* implicit */_Bool) arr_16 [i_5] [i_6 - 1])) ? (var_5) : (((/* implicit */int) var_19)))))))));
                            var_28 = ((short) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) var_5)) : (var_18)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) var_17))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_30 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_9)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))) >> (min(((-(0U))), (((/* implicit */unsigned int) ((int) var_16)))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) -278466931)))))) ? (((((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (min((arr_29 [i_10] [i_10] [i_9] [i_6] [i_5]), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10] [9U] [i_6 + 1] [(short)12])) || (var_3)))) : ((-(((/* implicit */int) (unsigned char)243))))))))))));
                            var_30 += ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                arr_31 [i_6] [i_5] = ((/* implicit */unsigned short) ((var_3) ? (((int) min((arr_26 [i_5] [i_5] [i_6 + 1]), (((/* implicit */short) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_6 + 2] [i_5])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9)))))))));
            }
        } 
    } 
    var_31 += ((/* implicit */int) ((unsigned short) (+((-(((/* implicit */int) var_6)))))));
}
