/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85258
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
    var_17 = ((/* implicit */short) ((unsigned int) ((unsigned short) 1210841777U)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) 8554552615145675105LL))) ? (((((/* implicit */long long int) 1210841777U)) & (-9114929080066182181LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (9007199237963776LL)));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36782))) / (var_12)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))))))))));
                            arr_19 [i_3 + 1] [i_3] [i_5] [(unsigned char)8] = ((/* implicit */unsigned char) arr_10 [i_3] [i_3]);
                            arr_20 [i_0] &= ((long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [(unsigned short)18] [i_0]))));
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_9 [i_4] [i_5] [i_6])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)24)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)241)) == (((/* implicit */int) (unsigned char)241)))))))) ? (((var_7) ? (min((var_2), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0])))) && (((/* implicit */_Bool) (unsigned char)16))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) arr_3 [(_Bool)1] [1LL]);
                            var_24 = ((/* implicit */long long int) var_11);
                            var_25 -= ((unsigned int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((-9114929080066182181LL), (((/* implicit */long long int) var_9))))));
                            arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (unsigned char)99);
                            arr_25 [i_0 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3 - 1] [(unsigned short)10] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))) && (((/* implicit */_Bool) ((var_1) ^ (var_2))))));
                        }
                        var_26 = ((/* implicit */unsigned int) max((var_26), (3227475910U)));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) arr_31 [i_11] [i_10] [i_9]);
                            var_28 = ((/* implicit */unsigned short) var_7);
                            arr_40 [i_12] [i_11] [i_10] [i_11] [i_12] = ((var_14) ? (((/* implicit */long long int) min((((((/* implicit */int) var_10)) * (((/* implicit */int) var_14)))), (((/* implicit */int) ((_Bool) var_7)))))) : (((long long int) ((_Bool) arr_17 [i_10] [i_10] [i_10] [i_10] [i_9] [i_9] [i_10]))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_8 [i_8] [i_11]), (arr_8 [i_10] [i_11])))) >> (((var_11) - (1401821747U)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            arr_43 [i_8] [i_8] [i_13] [i_8] [i_8] [14U] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_13]))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7948)) / (((/* implicit */int) ((unsigned char) var_5)))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_9])) ? (arr_11 [(unsigned short)5] [i_10] [i_10]) : (3594515537U)))) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (-9114929080066182181LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (arr_9 [i_8] [i_11] [i_13]))))));
                        }
                        var_32 = ((/* implicit */unsigned char) var_13);
                        var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_9] [(unsigned char)14] [i_8] [i_8] [i_9]))) / (arr_12 [i_8] [i_11] [i_10] [i_10])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 1; i_16 < 15; i_16 += 2) 
                        {
                            arr_52 [i_16] [i_16] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) arr_18 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16])), (var_0)))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(((/* implicit */int) max((((unsigned short) var_7)), (((unsigned short) arr_37 [i_8] [i_14] [i_15] [7U]))))))))));
                            var_35 = ((/* implicit */_Bool) arr_17 [i_8] [i_9] [i_16] [i_8] [i_16 - 1] [i_8] [i_16]);
                            var_36 = ((/* implicit */short) arr_8 [i_16] [i_14]);
                        }
                        var_37 &= ((/* implicit */_Bool) var_16);
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_9), (1067491385U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)240)))))))) ? (((/* implicit */int) max((var_4), (((((/* implicit */int) var_6)) == (((/* implicit */int) var_8))))))) : ((+(((/* implicit */int) arr_16 [(unsigned short)10] [(unsigned short)10] [i_9] [i_14] [i_14] [i_15] [i_15]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            var_39 = var_6;
                            var_40 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [i_8]))) / (var_9)))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 1; i_18 < 15; i_18 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((3084125525U) & (((/* implicit */unsigned int) -1291020751))));
                            var_42 += ((/* implicit */short) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_15] [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1])))));
                        }
                    }
                } 
            } 
            arr_59 [i_9] [i_8] = ((/* implicit */short) var_1);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            arr_62 [i_19] [i_8] [i_19] = ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                    {
                        {
                            arr_70 [i_8] [i_8] [i_19] [i_19] [i_20] [i_21] [i_19] = ((((((/* implicit */int) var_4)) < (((/* implicit */int) arr_64 [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_8] [i_8] [(short)10] [i_21] [(unsigned char)14] [i_21])) * (((/* implicit */int) ((_Bool) var_3)))))) : ((((!(((/* implicit */_Bool) arr_53 [i_19] [i_19])))) ? (var_11) : (arr_68 [i_8] [i_19] [i_19] [i_20] [i_21] [i_22]))));
                            arr_71 [i_8] [(_Bool)1] [i_20] [i_21] [i_21] [i_22] [i_19] = ((_Bool) var_12);
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */unsigned int) arr_69 [i_19] [i_19] [i_19]);
        }
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) var_14))));
        var_45 = ((/* implicit */_Bool) arr_15 [(short)16] [i_8] [(short)14] [i_8]);
    }
    var_46 = ((/* implicit */unsigned long long int) var_8);
}
