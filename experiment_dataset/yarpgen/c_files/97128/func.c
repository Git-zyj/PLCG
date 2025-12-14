/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97128
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (short)-9301)))) ^ (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_1]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) 12U));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-23)) ? (4294967295U) : (4294967295U))), (((/* implicit */unsigned int) (signed char)-11))));
                var_12 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (signed char)-122)), (4294967295U))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (signed char)50)), (4294967283U))) <= (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) var_5))))))))));
                var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0] [i_1]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [(short)12])))))))), (min((-5194310427165653203LL), (((/* implicit */long long int) 65535U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2] [i_3])) > (((/* implicit */int) arr_8 [i_2]))));
                                arr_20 [i_2] [0] [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3318665602U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57339)) == (((/* implicit */int) (_Bool)1)))))))) ? (min((min((((/* implicit */unsigned long long int) (_Bool)1)), (7468592830074694481ULL))), (((/* implicit */unsigned long long int) 4294967295U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1345582134137948122LL) != (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_6] [i_2] [i_5] [i_2] [(short)19] [i_2])))))))))));
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) min((410444643), (((/* implicit */int) (((((_Bool)1) ? (-410444632) : (((/* implicit */int) arr_10 [i_4] [i_5] [i_6])))) > (((/* implicit */int) ((_Bool) arr_10 [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) ((unsigned int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */unsigned int) -410444632)) > (9U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 4; i_8 < 20; i_8 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((int) min((-1562863126), (-410444657))));
                var_17 = ((/* implicit */short) ((unsigned short) (-(((((/* implicit */_Bool) arr_9 [i_7] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_7] [i_7])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 8; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_37 [i_9] [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) 17523794720132083513ULL);
                            arr_38 [i_12] = 922949353577468102ULL;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 8; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (5922707021623167985LL)))));
                            arr_43 [i_9] [i_10] [i_13] [i_14] [i_9] [i_9] = ((/* implicit */long long int) arr_12 [i_9] [i_10] [i_13]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 10; i_15 += 3) 
    {
        for (int i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 11; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        {
                            arr_56 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_17] [i_18] = ((min((2286231009U), (((/* implicit */unsigned int) ((short) 2286230988U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)60)) && (((/* implicit */_Bool) (unsigned short)57192))))))));
                            arr_57 [(unsigned char)12] [(unsigned char)12] [5ULL] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) 17523794720132083508ULL)) ? (410444643) : (((/* implicit */int) (unsigned short)65535))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 11; i_20 += 2) 
                    {
                        {
                            arr_63 [i_19] [i_19] [i_16] [i_19] = ((/* implicit */signed char) (_Bool)0);
                            arr_64 [i_19] [(unsigned char)8] [(unsigned char)8] [i_19] [i_20] = ((/* implicit */unsigned long long int) (short)-28948);
                        }
                    } 
                } 
            }
        } 
    } 
}
