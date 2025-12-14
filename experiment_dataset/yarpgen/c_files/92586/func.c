/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92586
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)227)) << (((((/* implicit */_Bool) 2872520164U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-3))))));
    var_15 &= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (~(((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 1])), (var_3))) >> (((6071790806175495767LL) - (6071790806175495759LL)))))));
                var_16 ^= ((/* implicit */unsigned int) arr_3 [i_1 - 2] [10LL] [i_1 - 1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_17 = var_9;
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1940671120)) ? (((/* implicit */int) (unsigned char)227)) : ((-(((/* implicit */int) (unsigned char)28)))))), (1886190657)));
                        arr_22 [i_3] [i_5 - 1] [i_4] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-4)) ^ (((/* implicit */int) (short)28546))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (8367397147498813463LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-85)) | (((/* implicit */int) (unsigned char)157)))))))));
                            var_20 ^= ((/* implicit */unsigned int) 5462985932117000691ULL);
                            var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_23 [i_2] [i_3 - 1] [i_4] [(_Bool)1] [i_6])) >= (((/* implicit */int) (signed char)85)))))) ? (min((min((8511251953256601236ULL), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) : (699507858905912965LL)))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_10)))));
                            var_22 = ((/* implicit */short) -8367397147498813463LL);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [(unsigned char)3])) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (var_0))) - (((/* implicit */int) (unsigned short)37173))))) : (max((arr_4 [i_3 + 1] [i_3 - 1]), (((/* implicit */long long int) 2726912987U))))));
                            arr_27 [i_3] [i_3] [i_4] [15U] [i_7] = ((/* implicit */signed char) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((short) arr_15 [i_3 + 1] [i_5 - 1] [i_5 + 4])))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned short)14508)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17489))))), ((~(var_0))))))))));
                        }
                        for (int i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            arr_31 [i_2] [i_3 + 1] [(unsigned short)4] [2ULL] [(unsigned char)10] |= ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_29 [16])))))) ? ((-(((((/* implicit */_Bool) (signed char)3)) ? (arr_30 [4U] [i_8 + 4] [i_4] [i_5] [i_8] [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) max((2726912982U), (((/* implicit */unsigned int) (_Bool)0)))))));
                            arr_32 [0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [(short)3] [3LL]))));
                        }
                        for (short i_9 = 2; i_9 < 15; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */int) (((-(var_10))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_3 - 1] [i_3 - 1] [13] [i_3 - 1]) <= (arr_21 [i_3 - 1] [i_5 + 2] [i_5] [i_9 - 2])))))));
                            var_26 = ((/* implicit */unsigned int) ((signed char) (short)-1875));
                            var_27 ^= ((short) var_2);
                            arr_35 [i_3] [i_4] [(unsigned short)6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_17 [i_3 + 1] [i_5 + 3] [i_9 + 3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)6387)) < (((/* implicit */int) (signed char)82)))))) : (min((arr_14 [i_4] [i_9 + 2]), (((/* implicit */unsigned int) arr_34 [i_2] [i_3 + 1] [12ULL] [i_5 - 1] [(unsigned short)12])))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) var_0))), (max((((/* implicit */int) arr_17 [i_3] [i_5] [4ULL] [i_3])), (var_1))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */_Bool) (signed char)-76)) ? (-6734641400192409148LL) : (((/* implicit */long long int) 1568054313U)));
}
