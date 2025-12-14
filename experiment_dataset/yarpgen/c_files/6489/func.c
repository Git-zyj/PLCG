/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6489
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
    var_20 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-12))));
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_16))))) == (max((((/* implicit */unsigned long long int) var_12)), (var_4))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (signed char)4))));
                    var_23 = ((/* implicit */unsigned char) min((((((arr_3 [(unsigned short)1] [i_0]) & (((/* implicit */long long int) 33554400U)))) / (((/* implicit */long long int) (~(var_18)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 + 1])))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-12)) < (0))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) (-(782698422)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) 2204635464U)))));
                arr_13 [i_0] = ((/* implicit */unsigned long long int) var_18);
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_5] = 3122537909U;
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)8] [i_3] [i_5]))) < (var_4))))));
            }
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (max((((/* implicit */unsigned long long int) -1177968137872489446LL)), ((+(3568818867667192852ULL))))) : (arr_6 [i_0] [6] [i_3] [i_0])));
                var_28 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22459)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_16 [i_6] [i_3] [i_0])))), (min((((unsigned long long int) (unsigned short)14117)), (((/* implicit */unsigned long long int) (-(1633995282U)))))));
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    arr_24 [i_0] [i_3] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (signed char)24))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    arr_25 [i_6] [(unsigned short)14] [i_6] [i_7 + 1] &= (((+(((/* implicit */int) (!(var_7)))))) - (((/* implicit */int) ((unsigned char) ((unsigned int) 1177076797U)))));
                }
            }
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max(((~(((((/* implicit */int) var_13)) | (((/* implicit */int) (short)26776)))))), ((+(((/* implicit */int) (unsigned short)29296)))))))));
            arr_26 [i_0] = min((0ULL), (((/* implicit */unsigned long long int) ((14892491790639814757ULL) < (8489324857924577421ULL)))));
            arr_27 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (6783401993909590380ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (9708029094635158661ULL))))), (((/* implicit */unsigned long long int) min((4619563297450140491LL), (((/* implicit */long long int) (unsigned short)16259)))))));
            var_30 = ((/* implicit */long long int) (+((+(min((((/* implicit */unsigned int) (unsigned char)117)), (1172429387U)))))));
        }
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-4)) / (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)28)), ((unsigned char)112)))))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4))))) - (175))))))));
    }
    for (int i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_37 [i_8 + 1] [i_8] [i_10] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)128)), (((long long int) 18446744073709551615ULL))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (signed char i_12 = 3; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) var_0);
                                arr_43 [i_12] [i_11] [i_8] [i_9] [i_8] = max((((/* implicit */unsigned long long int) arr_30 [i_10])), ((-(min((arr_38 [i_10] [i_8]), (var_14))))));
                            }
                        } 
                    } 
                    arr_44 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) (-(max((arr_0 [i_8 + 1] [i_8 + 1]), (arr_0 [i_9] [i_8 + 1])))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) 29360128))))) < (((unsigned long long int) max((789140571U), (((/* implicit */unsigned int) (unsigned short)0))))))))));
    }
    for (int i_13 = 1; i_13 < 20; i_13 += 1) /* same iter space */
    {
        var_34 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (var_10))))) ^ (max((((/* implicit */unsigned long long int) 869759309)), (var_15))))), ((-(min((((/* implicit */unsigned long long int) (unsigned char)11)), (arr_22 [1] [i_13 - 1] [(unsigned short)17] [i_13]))))));
        var_35 *= ((/* implicit */unsigned char) (+(((min((var_2), (var_18))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) (unsigned short)2048)))))))));
        arr_47 [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    }
}
