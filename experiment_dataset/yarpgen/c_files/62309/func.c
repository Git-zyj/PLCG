/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62309
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) max((var_11), (var_15)))) / (((/* implicit */int) var_15))))) * ((-(119566105U)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28096))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (max((((/* implicit */unsigned int) var_6)), (arr_0 [2U] [5U])))))) ? (arr_0 [(_Bool)1] [i_0]) : (max((((/* implicit */unsigned int) var_0)), (((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((_Bool) arr_0 [(unsigned short)9] [i_3 + 1]))))) % (((/* implicit */int) arr_6 [i_3 + 1] [i_2] [(_Bool)1] [(_Bool)1]))));
                        arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((_Bool) (_Bool)0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_6 [(signed char)5] [i_1] [i_2] [i_3])))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) - (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_4] [i_3 + 2]))) & (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_4])))))));
                            var_24 = ((/* implicit */short) arr_3 [i_1 + 1] [i_1]);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_12))));
                        }
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [(short)8] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        var_26 -= ((/* implicit */unsigned short) arr_9 [(_Bool)1]);
    }
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        var_27 = ((/* implicit */long long int) var_12);
        arr_15 [(unsigned short)5] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(short)3] [i_5])) + (((/* implicit */int) (unsigned short)1))))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)5583)))) - (((/* implicit */int) arr_20 [i_8 + 2])))))));
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) / (((/* implicit */int) (unsigned short)65535))));
                    arr_24 [(unsigned short)18] [i_7] [i_8 - 2] [i_7] |= ((((/* implicit */_Bool) arr_19 [i_8 - 2])) || (((/* implicit */_Bool) arr_19 [i_8 + 2])));
                    var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6])) % (((/* implicit */int) arr_22 [i_7] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) arr_20 [5ULL]))))) : (arr_19 [i_8])));
                }
            } 
        } 
        var_31 = arr_19 [i_6];
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            arr_28 [i_6] [(unsigned short)15] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1472))) & (arr_19 [i_9])))) ? (arr_27 [i_6] [i_6] [(unsigned short)6]) : (((((/* implicit */_Bool) var_3)) ? (arr_27 [(short)10] [i_9] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            arr_29 [i_6] &= ((/* implicit */long long int) arr_21 [i_6]);
        }
        var_32 += ((/* implicit */unsigned short) arr_25 [(signed char)11] [i_6] [(signed char)11]);
    }
    var_33 = ((/* implicit */_Bool) var_13);
    var_34 = ((/* implicit */unsigned long long int) ((unsigned int) max((max((var_12), ((unsigned short)65514))), (max((((/* implicit */unsigned short) (signed char)83)), (var_6))))));
    var_35 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((54043195528445952LL), (((/* implicit */long long int) var_2))))) && ((!(((/* implicit */_Bool) (unsigned short)65517)))))) ? (((((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-4831940055967229496LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_10))))))))));
}
