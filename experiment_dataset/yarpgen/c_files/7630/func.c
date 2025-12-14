/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7630
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_8 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37849))) : (3123363317U)))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1171603963U)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1171603994U))))))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 4347820210005032787LL))));
                                var_21 = ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_3 - 2] [i_1]);
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                arr_15 [(signed char)3] [i_3] [11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_11 [(signed char)18] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_5]))) : (13728060692773879104ULL)))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 134730991U)) ? (((unsigned int) (unsigned char)190)) : (((unsigned int) arr_2 [i_0] [i_1] [i_1]))));
                                var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9494)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)56042)) : (1154591486)));
                            }
                            for (signed char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) arr_12 [i_6]);
                                var_25 *= ((/* implicit */signed char) arr_11 [i_0] [i_2] [i_3]);
                                arr_20 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((_Bool) 30037684));
                            }
                            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                            {
                                var_26 = ((/* implicit */int) min((var_26), (arr_12 [i_0])));
                                var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1828147465)) ? (-4491530095399620878LL) : (((/* implicit */long long int) ((unsigned int) ((_Bool) (signed char)101))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_28 = -89028831;
                                var_29 ^= ((((/* implicit */_Bool) arr_24 [i_10])) ? (((int) ((((/* implicit */_Bool) 1588402638U)) ? (764874362U) : (arr_26 [i_9] [(unsigned char)15] [i_1] [i_0])))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 4; i_11 < 19; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        {
                            arr_39 [i_0] [18ULL] [i_11] [i_12] = ((/* implicit */int) arr_27 [i_0] [i_0] [i_0]);
                            var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_31 = (unsigned short)12055;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_13 = 4; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            {
                                arr_49 [i_0] [i_14] [i_13 + 1] [i_1] [i_0] |= ((/* implicit */_Bool) ((unsigned int) (signed char)92));
                                var_32 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        {
                            arr_62 [(signed char)20] [i_17] [i_17] [i_19] [i_16] = ((/* implicit */signed char) ((unsigned int) arr_54 [i_16]));
                            arr_63 [i_16] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2819856182U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_16])) ? (((/* implicit */int) arr_51 [(signed char)3])) : (-1589378446)))) ? (((((/* implicit */_Bool) arr_59 [i_16] [i_18] [i_19])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) arr_52 [i_16] [i_17] [i_17])))) : (((/* implicit */int) ((unsigned char) arr_53 [i_18]))))) : (((/* implicit */int) arr_59 [i_19] [i_18] [i_16]))));
                            var_33 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 1828816223U)) ? (((unsigned int) 3058524795085142359ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_19] [i_19] [i_18] [i_17] [i_16]))))));
                            arr_64 [i_16] &= ((/* implicit */unsigned long long int) 2819856185U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        for (int i_22 = 1; i_22 < 20; i_22 += 1) 
                        {
                            {
                                var_34 = 2146655955U;
                                var_35 = ((unsigned int) ((unsigned char) ((unsigned char) (_Bool)1)));
                                var_36 = ((/* implicit */unsigned int) arr_51 [i_17]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
