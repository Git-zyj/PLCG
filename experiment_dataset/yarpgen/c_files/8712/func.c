/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8712
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)24))))) ? (var_11) : (((/* implicit */long long int) ((int) var_6)))))) ? (((/* implicit */unsigned long long int) var_9)) : (((unsigned long long int) ((((/* implicit */_Bool) 9178613186966715007ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (signed char)-7)));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(-1)))), (((unsigned long long int) 8925596768699645514LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_1 - 1] [i_2] [5] [i_4])) || (((/* implicit */_Bool) arr_0 [i_0]))));
                                var_23 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7)))))) > (((unsigned long long int) arr_1 [i_0])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65512)) && (((/* implicit */_Bool) arr_11 [10U] [(unsigned short)0] [(signed char)12] [i_3] [i_2] [i_1] [10U]))))), (arr_12 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_3])))))));
                                arr_14 [(signed char)12] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8388096)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned short)65520))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] [i_1 - 1] = ((/* implicit */_Bool) (unsigned short)35247);
                    var_24 *= (signed char)15;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) arr_16 [i_5] [(signed char)12]);
        var_26 = ((/* implicit */unsigned int) max((var_26), (2715087854U)));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 1579879442U))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_24 [(signed char)1] [i_6] [i_7] [i_9]))))))) <= (((unsigned long long int) ((((/* implicit */unsigned int) var_12)) % (arr_16 [9U] [(signed char)18]))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 579358722625732463ULL))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_21 [i_5 - 1] [i_6])))) && (((/* implicit */_Bool) arr_23 [i_5] [(unsigned short)20] [i_7] [i_8]))))) : (((/* implicit */int) (short)-29393))));
                                var_30 += ((/* implicit */_Bool) arr_29 [i_9] [i_8] [15] [i_6] [(signed char)2] [i_6] [(signed char)2]);
                                var_31 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)35247)))) ? (max((arr_19 [i_6]), (arr_19 [i_6]))) : ((+((~(22)))))));
                            }
                        } 
                    } 
                    arr_30 [i_6] [(_Bool)1] [(_Bool)1] [i_7] = ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) : (18446744073709551609ULL));
                    var_32 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) (unsigned short)51409)) : (((/* implicit */int) arr_18 [(_Bool)1] [i_6] [(_Bool)1]))))), (max((((/* implicit */unsigned int) arr_22 [i_6])), (2715087838U)))))) ? (((int) arr_21 [i_7 - 1] [i_6])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 + 3] [i_5 + 3])) ? (((/* implicit */long long int) -1)) : (var_8)))) != (max((((/* implicit */unsigned long long int) arr_27 [i_5] [i_6] [i_5 + 2] [i_5] [i_5])), (arr_21 [(unsigned short)16] [(_Bool)1])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_12 = 3; i_12 < 17; i_12 += 3) 
            {
                for (unsigned short i_13 = 2; i_13 < 16; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned long long int) ((int) arr_27 [i_10] [i_13] [20U] [i_13] [10]));
                            arr_45 [i_10] [11ULL] [8ULL] [i_13] [i_11] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_12]))))) ? (((unsigned int) arr_39 [i_10] [i_11] [(signed char)15] [12U])) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)53681))))));
                        }
                    } 
                } 
            } 
            var_34 = ((((/* implicit */_Bool) arr_25 [0U] [i_11] [0U] [i_11])) ? (((unsigned long long int) var_15)) : ((+(arr_23 [i_10] [11LL] [(unsigned short)20] [i_11]))));
            arr_46 [i_11] [i_11] [16] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))));
        }
        for (signed char i_15 = 2; i_15 < 17; i_15 += 2) 
        {
            var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 1579879454U)) ? (arr_23 [i_10] [i_15 - 1] [i_15] [i_15 + 1]) : (arr_23 [i_15 + 1] [(_Bool)1] [i_10] [i_15 - 1])));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 3) 
            {
                for (int i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    {
                        var_36 = ((/* implicit */unsigned char) ((unsigned long long int) arr_39 [i_16 + 1] [i_16 + 1] [i_15 - 1] [i_10]));
                        arr_53 [(signed char)16] [i_15] [i_15] [8LL] [i_15] = var_15;
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned int) 2147483643);
    }
    var_38 = ((/* implicit */unsigned char) (~(var_11)));
}
