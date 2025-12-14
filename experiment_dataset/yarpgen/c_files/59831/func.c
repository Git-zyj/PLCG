/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59831
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) (~((~(3204831749316507348LL)))));
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((2169469103592410440ULL) == (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))));
                    var_19 = ((/* implicit */unsigned long long int) (~(-5113646578799942115LL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((int) var_16));
    var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1LL)) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (max((((/* implicit */unsigned long long int) (signed char)2)), (var_12)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1056173099)) ? (((/* implicit */long long int) -2147483635)) : (-6361156892861188213LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(arr_11 [i_3] [i_3])))));
        var_22 = ((/* implicit */unsigned long long int) (unsigned char)4);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_0 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
        arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(-8819293300020337267LL)))) > (16515565439261670935ULL)));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((/* implicit */long long int) ((arr_4 [i_5] [i_5] [i_5]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25)))))), ((~(arr_4 [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) 3046908696794506313ULL);
                        var_27 = ((/* implicit */long long int) (signed char)3);
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1048560)), ((-(var_16)))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_19 [i_5])))) ? ((~(-551315180858710397LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_19 [i_9]))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_35 [i_5] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -8762402501859078127LL)) ? (((/* implicit */unsigned long long int) ((((unsigned int) 2305807824841605120ULL)) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_7])))))))) : (4982060127236926806ULL)));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [0ULL])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)52)) | ((~(((/* implicit */int) (signed char)-25))))))) : ((+(((((/* implicit */unsigned long long int) 5029940379236215068LL)) + (4558266680346063668ULL))))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_8 - 1] [11LL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_14 [i_7 - 3])) ? (((/* implicit */int) arr_14 [i_7 + 2])) : (((/* implicit */int) arr_14 [i_7 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7 - 4])))))));
                            var_30 -= ((/* implicit */unsigned long long int) (signed char)-7);
                            arr_39 [i_5] [i_6] [i_5] [(signed char)7] [i_5] [i_11] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_26 [i_8 - 2] [i_5] [i_8 - 2] [i_5])))) ? (((long long int) arr_3 [4])) : ((+((~(9223372036854775807LL)))))));
                            arr_40 [i_5] [i_6] [i_7] [i_5] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((max((var_4), (var_9))) | (min((-1883023559259705503LL), (3520016415226384337LL))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 7597710230185247482ULL)))))))));
                        }
                    }
                    var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_5] [i_5] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                arr_46 [i_5] [i_6] [i_5] [i_5] [i_5] [4LL] [(unsigned char)10] = 7437906571214633232ULL;
                                var_32 = 4611686018427387904ULL;
                                arr_47 [i_5] [(signed char)6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_1)), (arr_7 [i_6] [i_7] [8]))), (((/* implicit */long long int) 4294967295U)))))));
                                arr_48 [i_5] [i_6] [i_7] [i_12] [i_13] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) 3844561049U)) ? (((/* implicit */unsigned long long int) arr_18 [i_13])) : (var_12))), (((/* implicit */unsigned long long int) arr_18 [i_6])))), (((/* implicit */unsigned long long int) 1789204014))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
