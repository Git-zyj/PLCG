/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59995
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
    var_13 &= ((/* implicit */unsigned int) ((var_6) >> (((((/* implicit */int) var_2)) - (8464)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) 144115188075855871LL);
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_9))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (short)-7917);
                    var_15 = ((/* implicit */int) max((var_15), (var_8)));
                    arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)9] [(signed char)0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */short) var_4);
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) 17762800153971776414ULL)) ? (((((/* implicit */_Bool) (short)7902)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)115)))) : (((/* implicit */int) arr_16 [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65373)) ^ (arr_2 [i_2 + 2])));
                        arr_20 [i_0] [14] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) << (((((/* implicit */int) var_5)) - (4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) : (3485455722U)));
                        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_14 [4] [i_2] [i_2]);
                        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11))))));
                        arr_24 [i_0] [i_0] [i_2 + 3] [i_6 + 1] = (((+(-1830037954))) / (((int) arr_2 [i_0])));
                    }
                }
                for (int i_7 = 3; i_7 < 22; i_7 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_9 [i_0] [(unsigned short)9] [i_7] [i_7]), (((/* implicit */int) (short)7902)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) <= (arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) min((max((var_0), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [(_Bool)1])) ? (var_0) : (((/* implicit */int) arr_22 [i_0] [i_0] [3U] [i_7]))))))) : (min((((/* implicit */unsigned long long int) -852951937)), (arr_26 [i_0] [i_0] [i_7 - 1])))));
                    arr_28 [20ULL] [i_1] [i_0] = (i_0 % 2 == 0) ? (((((((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_7 - 2])) + (2147483647))) << (((((min((((/* implicit */long long int) arr_7 [i_0] [i_0] [15] [(short)7])), (3878872819083881074LL))) + (40LL))) - (29LL))))) > (((/* implicit */int) ((unsigned short) max((17762800153971776414ULL), (((/* implicit */unsigned long long int) arr_22 [i_7] [i_0] [i_0] [i_0])))))))) : (((((((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_7 - 2])) + (2147483647))) << (((((((((min((((/* implicit */long long int) arr_7 [i_0] [i_0] [15] [(short)7])), (3878872819083881074LL))) + (40LL))) - (29LL))) + (25LL))) - (23LL))))) > (((/* implicit */int) ((unsigned short) max((17762800153971776414ULL), (((/* implicit */unsigned long long int) arr_22 [i_7] [i_0] [i_0] [i_0]))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_21 = ((/* implicit */int) -2287842123363256655LL);
                    arr_32 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 1830037974);
                    var_22 |= ((/* implicit */unsigned short) arr_7 [i_8] [i_8] [i_8] [4U]);
                }
                for (int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_4 [i_9 + 3] [i_9 - 1] [i_9 + 3])))));
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)7023)) >= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)114)), ((unsigned char)78)))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        for (unsigned char i_11 = 4; i_11 < 7; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                {
                    arr_41 [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_10] [i_12] [(_Bool)1] [(_Bool)1])), (var_2)))))))));
                    arr_42 [(unsigned char)0] [(signed char)0] [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 710066096))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 8; i_14 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) var_9);
                                arr_48 [i_10] [i_10] [i_12] [i_13] [i_10] [i_14] |= ((/* implicit */unsigned short) (~(min((max((((/* implicit */unsigned int) arr_7 [i_10] [i_12] [i_12] [i_14])), (var_10))), (((/* implicit */unsigned int) arr_18 [i_14 + 2] [i_14 + 1] [i_14 + 1] [i_14 - 1]))))));
                                var_26 = ((int) var_5);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_46 [i_11] [i_11 - 1]), ((signed char)60)))) << ((((~(((/* implicit */int) arr_35 [i_11 - 1])))) - (86))))))));
                    var_28 = ((/* implicit */short) ((((unsigned int) ((((/* implicit */int) arr_33 [i_10] [i_10])) <= (((/* implicit */int) arr_13 [i_12]))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_10])) && (arr_3 [i_10] [i_11] [i_12])))))))));
                }
            } 
        } 
    } 
}
