/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75755
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_7))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -51)) ? (((/* implicit */int) (unsigned char)179)) : (-32)))) ? (((((((/* implicit */int) var_0)) > (((/* implicit */int) var_8)))) ? ((+(((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (short)-11)))))) : (var_2));
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1001849573) < (((/* implicit */int) (unsigned short)49189)))))) : (min((((/* implicit */unsigned int) -18)), (var_7)))));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_15 [i_1 - 1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) arr_11 [i_2] [i_2] [i_4 + 3]);
                        arr_16 [i_1] [i_2] [i_3] [i_2] [i_3] [i_1] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (arr_8 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)107)), (var_6)))) ? (((-31) % (((/* implicit */int) var_5)))) : (20)))) % ((-((+(arr_19 [i_6] [i_5] [i_1])))))));
                var_12 = ((/* implicit */unsigned char) (~((-(var_4)))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_28 [i_1] = ((/* implicit */unsigned short) 1242325334);
                            arr_29 [i_1] [i_5] [i_6] [i_7] [i_1] = ((((/* implicit */int) arr_22 [i_1] [0LL] [i_6] [i_5])) | (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))), (min(((unsigned short)16346), ((unsigned short)16346)))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                var_13 = ((/* implicit */short) max((2877976479U), ((((-(2649998151U))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_3))));
                var_15 &= arr_21 [i_9] [i_1] [i_1];
                var_16 = (((~(((/* implicit */int) arr_17 [i_1 + 1] [i_9 + 1])))) & (max((-1805015166), (((/* implicit */int) var_3)))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) (-2147483647 - 1));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_10 [i_11] [i_12] [(unsigned char)10]))));
                        }
                    } 
                } 
                arr_40 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)34)) < (((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) arr_35 [i_1 - 2] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -3707317363908865764LL)) > (2529780776600485008ULL)))) : (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) -36)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7643)))))) ? (134217727) : (((/* implicit */int) ((unsigned char) -7804985059864593789LL))));
                            var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (unsigned char)220)))) : (((/* implicit */int) arr_21 [i_1 - 1] [i_10 - 1] [i_10 + 1]))))));
                            var_21 &= ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((short) arr_31 [i_10 - 1] [(unsigned char)0] [i_1] [i_10 + 1]))) : (((((/* implicit */_Bool) arr_31 [i_10 + 2] [i_10 + 2] [i_1] [i_10 + 2])) ? (2147483647) : (-1)))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (min((((/* implicit */unsigned long long int) (signed char)-33)), (var_6)))))) ? ((-(((((/* implicit */int) arr_25 [i_1 - 2] [i_1] [i_5] [(unsigned short)11])) % (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) ((var_2) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((-31) > (-58)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [18LL] [18LL] [i_1 - 3] [i_1])) : (((/* implicit */int) var_3)))))))))));
            }
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                var_24 = (~(((/* implicit */int) (signed char)-33)));
                var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == ((+(var_7))))))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1]))) | (var_7))))) > (((unsigned int) (_Bool)0))));
                            arr_58 [i_1 - 1] [i_16] [i_17] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((2147483647) == (((/* implicit */int) var_9))))) : (((/* implicit */int) (signed char)71))))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_4)))));
                            var_28 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8))))));
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || ((!(((((/* implicit */_Bool) 863069910)) || (((/* implicit */_Bool) var_1))))))));
                        }
                    } 
                } 
            } 
            var_30 = (+(((((/* implicit */int) (!(((/* implicit */_Bool) 4159119262865109850LL))))) % (((/* implicit */int) var_8)))));
            arr_59 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 19; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    for (unsigned int i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (((-(3065864227765149102ULL))) & (((/* implicit */unsigned long long int) (~(2147483647))))));
                            var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((643150094) << (((((/* implicit */int) var_8)) - (43))))))))));
                            arr_67 [i_1] [i_1] [i_16] [i_20] [i_21] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) % (4120762366281945870ULL)))) ? (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) arr_35 [i_1 + 1] [i_1]))))) : ((+(var_4)))));
                            arr_68 [i_1] [i_16] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_9)) & ((+(((((/* implicit */_Bool) (unsigned char)150)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_9))))))));
                            var_32 = (((+(min((((/* implicit */int) var_0)), (1752104001))))) == (((/* implicit */int) var_3)));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) (signed char)-52);
        }
    }
    var_34 = ((/* implicit */signed char) var_7);
}
