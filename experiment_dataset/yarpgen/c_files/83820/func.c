/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83820
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0 + 1] [i_0] [i_2] [i_3 + 1] = ((/* implicit */int) (_Bool)1);
                            arr_14 [i_0] [(signed char)6] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_1 [i_0 + 1]))))) | ((~(arr_12 [i_0 - 1] [i_3 + 1] [i_3 - 1] [i_3])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */short) max((arr_4 [i_0] [0ULL]), (((/* implicit */unsigned short) (_Bool)1))));
                                var_12 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((var_2) - (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8 - 1]))) / (max((((/* implicit */long long int) arr_20 [i_7] [(unsigned short)22] [(short)5] [i_7])), (arr_22 [10U])))))));
                var_15 = ((/* implicit */unsigned int) (_Bool)1);
                var_16 = ((/* implicit */signed char) ((unsigned long long int) 16017316523644378095ULL));
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        {
                            arr_33 [6ULL] [11U] [11U] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_8] [7ULL]), (arr_6 [i_7] [i_7])))) ? (((((/* implicit */_Bool) arr_6 [i_8] [i_8])) ? (((/* implicit */int) arr_18 [(unsigned char)23] [(unsigned char)23] [17U] [i_8 - 1])) : (((/* implicit */int) arr_18 [(signed char)9] [i_8] [(signed char)9] [i_8 - 1])))) : ((+(((/* implicit */int) arr_18 [(unsigned short)2] [(unsigned short)2] [i_7] [i_8 - 1]))))));
                            var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_26 [i_7] [(short)0] [i_7])) ? (arr_16 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]) : (((/* implicit */long long int) ((unsigned int) arr_32 [i_7] [i_7] [6ULL] [i_7])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 447972823U)) ? (((((/* implicit */_Bool) var_10)) ? (2003267000U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)5684))))))) ? (((((/* implicit */long long int) max((263601326U), (((/* implicit */unsigned int) var_1))))) / (((var_10) - (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) 3846994447U))));
    /* LoopNest 3 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 22; i_13 += 3) 
            {
                {
                    arr_40 [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned int) (((-(arr_7 [i_13] [i_13] [i_13 + 1] [i_11 - 1]))) / (((/* implicit */long long int) arr_2 [i_12]))));
                    var_19 = ((/* implicit */_Bool) -1520919577);
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_12] [12U] [12U] [12U])) * (((/* implicit */int) (short)-4))))) ? (((/* implicit */int) arr_23 [i_13] [i_13] [i_13 + 2] [i_13])) : (((/* implicit */int) var_0)))) * (((/* implicit */int) arr_9 [6LL] [i_11 - 1] [i_14] [i_13 - 1]))));
                                var_21 = ((/* implicit */unsigned short) arr_35 [i_12]);
                                arr_45 [i_11] [(_Bool)1] [i_13] [i_13] [12U] [21LL] [(_Bool)1] = ((/* implicit */long long int) 2429427550065173521ULL);
                            }
                        } 
                    } 
                    arr_46 [i_13] [i_12] = ((/* implicit */int) (~((+(2574277032U)))));
                }
            } 
        } 
    } 
}
