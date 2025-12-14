/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74514
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((long long int) var_2)) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((591329724U), (((/* implicit */unsigned int) (signed char)-12)))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */unsigned short) -770000106135730122LL);
                        arr_14 [2U] [i_0] [i_1] [i_0] [16ULL] = ((/* implicit */short) (~((~(((/* implicit */int) arr_7 [4U] [i_1] [4U] [(short)18]))))));
                        var_12 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_2] [i_0] [i_3]);
                        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)6])))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_7 [i_0] [i_1] [5ULL] [i_4])) - ((+(((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) <= (arr_9 [(signed char)4] [i_1] [i_0]))))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) / (max((((var_4) << (((var_4) - (16552492542977663614ULL))))), (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4]))))))))))));
                    }
                    arr_18 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (unsigned short)30601))))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_1 [i_2] [i_2]))))) : (var_10)))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1158131537)) % (8429803244496963259ULL)))) && (((/* implicit */_Bool) var_7)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) | (9223372035781033984ULL))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                    var_15 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)34935)), (-997158334)));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_1);
}
