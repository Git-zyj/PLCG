/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70332
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32512))) : (1925468748U))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15118434676570060249ULL)) ? (((/* implicit */int) (unsigned short)33024)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_3)) ? (max((3328309397139491367ULL), (((/* implicit */unsigned long long int) var_7)))) : (((unsigned long long int) (unsigned short)33045)))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_7)), (var_1))), (((/* implicit */long long int) (+(var_4)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (unsigned char)0))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_17 [(unsigned short)4] [(unsigned short)4] [i_0] [i_0] [i_4] &= ((/* implicit */short) ((((4004937547845769787ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)113))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32512)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_16 [(short)16] [(short)16] [i_0] [i_3] [i_4 - 2]))))) : (((((/* implicit */_Bool) 2658296208284570196ULL)) ? (1249790108007726770ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32515)))))))));
                                arr_18 [i_3] = ((/* implicit */long long int) var_8);
                                arr_19 [(unsigned short)18] [i_3] [i_2 - 3] [i_3] [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(var_9))), (var_1)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_15 [i_4 + 2] [i_2 + 3] [i_1 + 1] [i_1 + 1] [i_0] [i_0])), (arr_9 [i_4 + 2] [i_4])))) : (min((((/* implicit */long long int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3] [i_3] [i_2])), (((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_3])) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 3757431182U))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2 + 2]);
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (min((537536114U), (((/* implicit */unsigned int) arr_5 [i_0] [14])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [(unsigned short)20] [i_5] [i_5] [i_5] [i_5] [(unsigned short)20]))));
        arr_25 [i_5] [i_5] = ((((/* implicit */_Bool) arr_0 [i_5])) ? (((((/* implicit */_Bool) (unsigned short)32512)) ? (((/* implicit */unsigned long long int) var_4)) : (var_10))) : (((/* implicit */unsigned long long int) var_9)));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) << (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6 - 2] [i_7 - 2])) ? (((/* implicit */int) arr_5 [i_6 - 1] [i_7 + 2])) : (((/* implicit */int) arr_30 [i_7 - 1] [i_7])))))));
                }
            } 
        } 
        arr_31 [(unsigned short)0] [i_5] = ((/* implicit */unsigned char) arr_23 [i_5] [i_5]);
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-2260575058042169471LL), (((/* implicit */long long int) (unsigned short)10413))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)20)), (var_4)))) : (min((6654775120783624038ULL), (((/* implicit */unsigned long long int) (unsigned char)139)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_8] [i_8] [i_8] [i_8])), (arr_7 [i_8] [i_8])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33023))) <= ((+(max((13145553898171208485ULL), (((/* implicit */unsigned long long int) arr_33 [i_8]))))))));
    }
}
