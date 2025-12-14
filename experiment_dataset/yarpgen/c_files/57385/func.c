/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57385
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((((/* implicit */_Bool) 16380LL)) ? (((/* implicit */int) (short)-30887)) : (((/* implicit */int) (unsigned short)5166))))) - (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (var_8)));
                arr_7 [i_0] [(unsigned short)4] = ((/* implicit */signed char) ((_Bool) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_5)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_3);
                                arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_10))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10))))))));
                                arr_18 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_2))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))) : (((((((/* implicit */long long int) ((/* implicit */int) var_7))) == (var_12))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -16397LL)) ? (((((/* implicit */_Bool) (signed char)-31)) ? (16380LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_22 [i_1] = ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_11)))))) + (((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2)))));
                    arr_23 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) << (((/* implicit */int) var_7))))) ? (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (var_9)))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_1))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))) - (157LL))))) : (((/* implicit */long long int) min((((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_11)))))));
                    arr_24 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_9) / (((/* implicit */unsigned long long int) var_1)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))))));
                    arr_25 [i_1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_1)))) != (((/* implicit */int) ((_Bool) var_1)))))) >= (((((/* implicit */int) ((((/* implicit */_Bool) 16380LL)) || (((/* implicit */_Bool) (signed char)30))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42635))) < (16362LL))))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) ((var_1) < (var_8))))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_8)))))))));
}
