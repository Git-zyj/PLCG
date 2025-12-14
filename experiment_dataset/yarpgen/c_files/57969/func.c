/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57969
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
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_1])) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_1] [9] [i_1])))))))) ? (((((/* implicit */_Bool) 1397352877U)) ? (835833342281378065ULL) : (17610910731428173538ULL))) : ((((~(var_18))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_0 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((+(arr_4 [i_2] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17610910731428173551ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1397352877U)))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3458764513820540928ULL)) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49117))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_8 [i_3] [i_2] [i_1 + 1] [i_1] [i_0]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((((/* implicit */_Bool) (unsigned short)57370)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [0ULL] [i_0] [0ULL] [i_0]))) : (var_16))) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_5] [i_4] [i_1]))))) ? (((((((/* implicit */unsigned long long int) var_6)) ^ (arr_1 [i_0]))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46256))) : (arr_14 [i_5] [i_1] [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (-281537260)))) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_2] [8LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_4] [i_1] [i_1] [i_0]))) : (252U))) : (((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_5))))))))));
                                arr_15 [i_1] [i_4] [(unsigned char)2] [8ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16418)) | (((/* implicit */int) (unsigned short)24576))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22971)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49999))) : (2211329265693185324LL)));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((8879523606456338620ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_4 [i_5] [i_4] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) ? (((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1] [i_1])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_2] [i_1] [i_0]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3632941036U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_2] [i_1] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_2])))))) ? (max((2897614434U), (((/* implicit */unsigned int) -1556893491)))) : (var_4))))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54006)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_1]))) : (arr_7 [i_1] [i_1] [i_1 - 3] [i_1])))), (min((((/* implicit */unsigned long long int) var_14)), (var_16)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25165))) != (arr_14 [i_1] [i_1 + 4] [i_1 - 1] [0ULL] [i_1 + 4]))))) : ((+(((((/* implicit */_Bool) (unsigned short)65320)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0] [i_0]))) : (arr_0 [i_0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) (signed char)46))))) ? (((((/* implicit */_Bool) var_4)) ? (4739800598259381896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))) : (((((((/* implicit */long long int) 129024)) != (7225275087199854266LL))) ? (max((var_16), (var_0))) : (((/* implicit */unsigned long long int) ((unsigned int) 129024)))))));
}
