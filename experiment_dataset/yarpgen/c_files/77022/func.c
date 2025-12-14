/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77022
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
    var_13 = ((max((((/* implicit */int) ((9739691596233729826ULL) <= (((/* implicit */unsigned long long int) 2422530670U))))), ((~(((/* implicit */int) var_5)))))) >> (((max((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)10)))), (((/* implicit */long long int) max((-1408891329), (((/* implicit */int) var_5))))))) - (9223372036854775793LL))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [0] [i_2] [i_2] = ((/* implicit */unsigned short) min((min((min((4088), (((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_1 [i_1])))))), (min((max((4093), (((/* implicit */int) (unsigned short)15215)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1])), ((unsigned short)43796))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_1] = max((max((max((arr_5 [i_3] [i_3]), (((/* implicit */unsigned long long int) -1026229156)))), (max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_0] [5ULL] [i_2]))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)95))))))));
                        var_14 = ((((/* implicit */long long int) max((min((409608445), (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3] [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_11))))))) == (max((((/* implicit */long long int) (+(839821178)))), (max((((/* implicit */long long int) 33554431)), (9223372036854775807LL))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (max((arr_12 [i_0] [i_0] [i_1] [i_2] [(unsigned short)14]), (((/* implicit */unsigned long long int) 528382311)))))), (((max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))) * (min((4586641173578890102ULL), (((/* implicit */unsigned long long int) (short)32767)))))))))));
                        arr_14 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_9 [i_0] [i_0] [i_0] [i_0] [8ULL]), (var_4))), (((/* implicit */short) min(((unsigned char)255), (((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]))))))))) | (max((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (1101562787734670710ULL)))))));
                        arr_15 [i_1] [(short)4] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (signed char)15)), (1068684358097375492LL))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_4] [4ULL])) | (((/* implicit */int) var_10))))), ((+(2629322015481526177LL)))))));
                        var_16 = ((/* implicit */signed char) (-(min(((-(5530803751631060902ULL))), (((/* implicit */unsigned long long int) max((417220109), (((/* implicit */int) (signed char)-23)))))))));
                        arr_16 [i_1] [i_1] |= ((/* implicit */_Bool) max((((((var_11) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), ((signed char)-21))))))), (((/* implicit */long long int) ((min((12031459688524721494ULL), (((/* implicit */unsigned long long int) var_11)))) < (((/* implicit */unsigned long long int) (-(4294967295U)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_17 |= ((/* implicit */unsigned short) (+((-(arr_17 [i_2])))));
                        arr_19 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)19)) <= (((/* implicit */int) (short)-21794))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-8492)))))));
                        var_18 = (!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32727))) == (2629322015481526177LL))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)4096)) - (((/* implicit */int) (_Bool)1)))))))));
                        var_20 &= ((/* implicit */int) ((((8935141660703064064LL) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [(_Bool)1] [(_Bool)1]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_11) <= (((/* implicit */long long int) arr_17 [i_1]))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_22 [i_2] [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(1897370465))))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) max((arr_20 [i_0] [i_0] [i_2] [i_6] [i_2]), (arr_9 [i_0] [i_1] [i_1] [i_0] [i_0])))), (max((var_3), (arr_3 [i_2] [i_1] [i_0]))))))));
                        arr_23 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned short) (~((~((~(arr_5 [i_0] [i_2])))))));
                    }
                }
            } 
        } 
    } 
}
