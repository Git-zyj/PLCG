/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95019
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (+(((arr_0 [i_0] [i_0]) - (arr_0 [(unsigned char)7] [(unsigned char)7])))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (arr_0 [i_0] [i_0])))) < ((~(arr_0 [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3816818134U)) ? (((/* implicit */unsigned long long int) -8LL)) : (5949573475222540014ULL)))) ? (((5949573475222540014ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (arr_0 [i_0] [i_0]))))))));
        var_10 = ((((/* implicit */_Bool) ((min((8472983416205007404LL), (((/* implicit */long long int) -1561833923)))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))))) ? (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0]))))) ? (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))) : (min((((/* implicit */int) ((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [(unsigned char)2] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_11 = (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_7))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    arr_10 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (arr_6 [i_1 + 1] [(_Bool)1] [i_3]))))) == (((((/* implicit */_Bool) 5583936575661083042ULL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (8472983416205007404LL))))) ? ((+((+(((/* implicit */int) arr_4 [i_2] [i_3])))))) : (((/* implicit */int) (!(arr_8 [i_1 + 1] [i_1] [i_3] [i_3]))))));
                    var_12 += ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_1] [i_3] [i_3] [i_3]))), (((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (arr_9 [i_3]) : (arr_5 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) != (((arr_8 [i_1] [i_3] [i_1] [i_3]) ? (arr_5 [10U]) : (arr_9 [i_3]))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_1] [i_3] [i_2] [i_1 - 1])), (arr_6 [i_1] [i_2] [1ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32757)))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_9 [i_3]))))));
                }
                arr_11 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned char)0)))))));
                arr_12 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (1366236738) : (((/* implicit */int) (short)17883))))) ^ (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_1]))) : (((arr_9 [i_1]) << (((arr_9 [i_1]) - (4991888979361864607ULL)))))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (((((/* implicit */_Bool) 1561833923)) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned long long int) -110765284)) : (15679523773349700646ULL))) : (((/* implicit */unsigned long long int) 4503599627370495LL))))));
                var_14 += (+(max((arr_5 [i_1 - 1]), (arr_5 [i_1 - 1]))));
            }
        } 
    } 
}
