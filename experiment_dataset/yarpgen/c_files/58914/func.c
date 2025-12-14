/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58914
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
    var_20 = min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_14)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_3)) ? (var_18) : (arr_0 [4LL]))) / (((long long int) arr_1 [i_0])))), (((arr_1 [i_0]) >> (((6572742165578081743LL) - (6572742165578081709LL)))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)1364)))) - (((arr_1 [i_0]) + (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_6), (var_6)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
        var_23 = ((min((((((/* implicit */_Bool) (unsigned short)56108)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25267))) : (arr_1 [i_0]))), (-7654727887737478074LL))) + ((+(arr_1 [i_0]))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) ((arr_0 [i_0]) + (((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (6849281231831071976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))) : (((4431574965871944325LL) | (2363952584321568873LL)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_24 = max((((/* implicit */long long int) (unsigned short)1363)), ((~(max((arr_0 [i_1 - 1]), (((/* implicit */long long int) (unsigned short)65534)))))));
        arr_6 [(unsigned short)1] = ((/* implicit */long long int) min(((~((-(((/* implicit */int) (unsigned short)18370)))))), (((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */long long int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65326)) < (((/* implicit */int) var_10)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) 4431574965871944325LL);
                        var_26 = ((/* implicit */unsigned short) ((arr_12 [i_1 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46960)))));
                        var_27 = ((((/* implicit */_Bool) ((long long int) var_13))) ? ((-(var_17))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))));
                        var_28 += ((unsigned short) arr_11 [i_4] [i_4] [i_3] [i_1 + 2] [(unsigned short)6]);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_29 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [7LL] [7LL] [i_1]))))) ? (var_13) : (((long long int) var_5)));
                        var_30 = ((-2363952584321568874LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26566))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65528)) <= (((/* implicit */int) arr_21 [i_2] [i_6] [i_6] [i_3 + 1] [i_3 - 1] [i_2] [i_1 - 2])))) ? (var_13) : (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_4 [i_3]))), (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_6] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65521))))))))))));
                                arr_23 [i_3] [i_1] [i_2] [i_3] [i_3 - 2] [i_6] [i_7] = ((/* implicit */unsigned short) ((-1850594574926200649LL) + (arr_0 [i_1])));
                                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (+(arr_12 [i_2]))))));
                                arr_24 [i_7] [i_7] [i_3] [i_3] [i_3] [12LL] [i_1] = arr_20 [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_3] [i_6];
                            }
                        } 
                    } 
                    var_33 = arr_1 [i_1 - 1];
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_34 = min((((/* implicit */long long int) max((((unsigned short) arr_17 [i_1] [i_2])), (var_19)))), (((long long int) ((long long int) (unsigned short)5))));
                                var_35 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((9223372036854775807LL) < (var_6)))), ((+(-140271189379810489LL))))) / (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65527)), (arr_11 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1]))))));
    }
    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
    {
        var_37 = max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7))))), (((((/* implicit */_Bool) arr_27 [i_10] [13LL] [i_10] [i_10 + 2])) ? (max((2363952584321568879LL), (((/* implicit */long long int) (unsigned short)48954)))) : (max((((/* implicit */long long int) var_11)), (-7654727887737478063LL))))));
        arr_33 [i_10] = ((/* implicit */unsigned short) var_6);
        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [i_10]))));
    }
    var_39 = ((/* implicit */unsigned short) (((~(var_16))) < (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_40 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51160))));
    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65512))) ? (((((/* implicit */_Bool) var_19)) ? (var_17) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28017)))));
}
