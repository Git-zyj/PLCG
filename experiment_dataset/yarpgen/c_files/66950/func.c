/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66950
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
    var_11 = ((/* implicit */int) (unsigned short)6666);
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-896428347) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (896428350)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))))) : (var_10)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [2LL] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))), (((/* implicit */unsigned long long int) -896428347)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_12 [i_2] = 4494803534348288ULL;
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) arr_0 [13LL])) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        var_14 = arr_6 [i_0];
                        arr_14 [i_0] [(short)13] [i_0] [i_2] = ((/* implicit */signed char) (unsigned short)25407);
                        arr_15 [i_0] [i_2] [(signed char)0] [i_0] = ((/* implicit */unsigned short) var_8);
                    }
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) (short)21374)), (var_5))))) ? (((/* implicit */int) ((unsigned short) max((-1233175523), (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)1712))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_1))));
                    }
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        var_17 ^= (unsigned short)7396;
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1233175523)) && (((((/* implicit */_Bool) min((3602072522U), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_19 [7LL] [(short)7] [10LL] [(short)7]))))))));
                    }
                    arr_22 [(signed char)16] [(signed char)16] [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_2 - 3]))) ? (((/* implicit */int) arr_5 [i_2 - 2])) : (((((/* implicit */_Bool) arr_2 [i_2 + 3])) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 1]))))));
                }
            } 
        } 
    }
    for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
    {
        var_19 ^= ((/* implicit */short) var_9);
        arr_25 [(signed char)3] = ((/* implicit */int) var_9);
        arr_26 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [(signed char)16])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 - 3]))) : (max((((/* implicit */unsigned int) (signed char)-100)), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [15] [i_6 + 1])))));
    }
}
