/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97255
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (~((~(max((((/* implicit */unsigned long long int) var_9)), (var_3)))))));
        var_15 += ((/* implicit */short) var_0);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_3))))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = var_13;
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (signed char i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_3] [i_4] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)-120)), (-1387540484282571414LL))), (((/* implicit */long long int) max((0), (((/* implicit */int) (short)32767)))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */short) ((var_5) ^ (min((min((var_5), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) var_0))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_3)))), (max((min((((/* implicit */unsigned long long int) var_1)), (var_3))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned char) var_11))))))))))));
                            var_18 = ((/* implicit */signed char) (~(-252100462)));
                            var_19 ^= max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_4))), (((/* implicit */long long int) (~(var_10))))))), (min((max((var_3), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_8), (var_12))))));
                            var_21 = ((/* implicit */_Bool) max(((-(max((var_3), (var_3))))), (((/* implicit */unsigned long long int) min((var_10), ((+(((/* implicit */int) var_8)))))))));
                            var_22 = ((/* implicit */short) (+(max((((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))));
                            var_23 = ((/* implicit */short) min((max((((/* implicit */long long int) var_13)), (min((var_4), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_8))))), (min((var_9), (var_2))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_26 [i_7] [i_4] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_2))))))));
                            arr_27 [i_1] [i_4] [i_3] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) min((min((var_5), (((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned char) var_8))))))), (var_5)));
                            arr_28 [i_7] [i_1] [i_4 + 3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (var_3))) > (((/* implicit */unsigned long long int) (+(var_4))))))), ((+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_11))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */int) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (-1LL))), (max(((~(var_4))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_2))))))), (min((min((1122755047U), (((/* implicit */unsigned int) (short)23414)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)23397)))))))));
    }
    var_25 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_7)))))), (min((((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))), ((-(((/* implicit */int) var_11))))))));
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-118)))))))));
}
