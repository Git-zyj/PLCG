/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76654
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [12] = ((/* implicit */short) ((4294967278U) / (((/* implicit */unsigned int) ((int) 8554209750332020935ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((3203096415117180751ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18243))))), (((/* implicit */unsigned long long int) 295976134U))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((2065432550U), (((/* implicit */unsigned int) 150915998))));
    }
    var_19 = (+(((/* implicit */int) var_4)));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) (signed char)16);
        arr_9 [i_1] = ((/* implicit */int) 16483001567704034220ULL);
        arr_10 [(short)14] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned int) -150915987)) % (1698264807U))), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-17))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (-((~(16714151151006169529ULL)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_26 [i_3] = (-(min((1698264830U), (((/* implicit */unsigned int) (unsigned short)49483)))));
                                arr_27 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) min((1732592922703382087ULL), (((/* implicit */unsigned long long int) 2596702482U)))));
                            }
                        } 
                    } 
                } 
                arr_28 [i_2 + 1] [i_2 + 1] [i_3] = max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12160)) && (((/* implicit */_Bool) 16714151151006169529ULL))))), (68719214592LL))), (((/* implicit */long long int) 1451006816U)));
                arr_29 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned short) (-(((3998991162U) / (((2740619823U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104)))))))));
                arr_30 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((16672347971776864067ULL) <= (((/* implicit */unsigned long long int) 2596702472U))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) 65535LL)) >= (9783424537952354368ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                arr_35 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) -1360760359)))));
                arr_36 [i_8] = ((long long int) ((-2104259647) - (((/* implicit */int) (unsigned short)64240))));
            }
        } 
    } 
}
