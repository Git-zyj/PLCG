/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/624
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_1 [i_4 + 1]))))) : ((((_Bool)1) ? (arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1]) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1])))));
                                var_17 = ((/* implicit */short) var_13);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4]))) - (arr_2 [i_0]))))))) ? ((+(((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_4 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_5))))))) : (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)229)) * (((/* implicit */int) var_10))))) - (max((((/* implicit */long long int) var_4)), (arr_6 [i_2] [i_2] [i_2] [i_2])))))));
                                var_19 |= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_14 [i_1 - 1])))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_6 + 3] [i_6 + 3] [i_2] [i_5] [i_6] [i_5]), (((/* implicit */unsigned int) ((int) 3606736853819641159ULL)))))) ? (max((((arr_9 [i_0] [i_0] [i_2] [i_5] [i_6] [i_6 + 2] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) arr_28 [i_7] [i_8] [i_8] [i_10] [i_9]);
                            arr_30 [i_7 - 1] [i_8] = (+(var_15));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_11 = 3; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_12)))) || (((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_25 [i_7 - 1] [i_11 - 2] [i_13 + 2])))))));
                                arr_38 [i_11] [i_11] [i_11] [i_12] [i_13] = ((/* implicit */signed char) arr_24 [i_7] [i_7] [i_11]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) min((arr_40 [i_8] [i_14] [i_14]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 1])) * (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 2])))))));
                            arr_44 [i_7] [i_8] [i_14] [i_14] = ((/* implicit */unsigned short) var_4);
                            arr_45 [i_7 + 1] [i_14] = ((/* implicit */long long int) var_0);
                            arr_46 [i_7] [i_14] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
