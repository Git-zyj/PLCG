/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73483
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -6485643793024402801LL))))), (var_12)));
    var_18 = ((/* implicit */unsigned short) (~(12986810978163541938ULL)));
    var_19 = ((/* implicit */unsigned short) (+(0ULL)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [20ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3748)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19341))) : (1537365818633261915LL)))) : ((+(366812845394360914ULL)))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((((/* implicit */_Bool) -2147483637)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3749)))))));
                            arr_12 [(unsigned short)16] [i_0] [i_2] [i_3 - 2] = (unsigned char)176;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_4 [i_5] [i_0] [i_1 + 1]);
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            arr_21 [i_0 + 1] [i_0] [i_4] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((6485643793024402779LL) >= (((/* implicit */long long int) arr_19 [i_0] [i_1] [i_1] [i_0] [i_4] [i_5] [20LL])))))));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (+(10249897948733288504ULL)));
                            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_5] [i_7]))));
                            var_24 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        }
                        var_25 = ((/* implicit */unsigned short) 17169458100335681390ULL);
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) (unsigned char)218);
                        var_27 = ((/* implicit */unsigned short) min((var_27), (arr_10 [i_0] [i_0] [i_1] [i_4] [i_8])));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 2; i_9 < 21; i_9 += 2) 
                    {
                        arr_31 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_0] [i_0 + 1])) ? (arr_16 [i_1 - 1] [i_0] [i_0 + 3]) : (((/* implicit */long long int) -597992726))));
                        arr_32 [i_0] [i_9] [3U] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_14 [i_0]) : (arr_14 [i_0])));
                        var_28 |= ((((-1034962822) - (arr_19 [i_0] [i_0 + 3] [i_1] [i_4] [i_4] [i_4] [(signed char)0]))) < (((/* implicit */int) (unsigned char)119)));
                        arr_33 [i_0] [i_0] = ((/* implicit */signed char) (short)3748);
                        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [4U] [i_0] [i_0] [i_9] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_4] [i_9 - 2]))) : (4294967295ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned short)38994)))))));
                    }
                    for (short i_10 = 2; i_10 < 21; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (6598532274426892533ULL)))));
                        arr_36 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-3749))));
                    }
                    var_31 = ((/* implicit */_Bool) max((var_31), ((!(((/* implicit */_Bool) arr_3 [i_4]))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_14 [i_4]))));
                                arr_44 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7868719414351595623LL)) ? (((/* implicit */unsigned long long int) 597992726)) : (2695187772111780390ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_34 [i_0] [i_1] [i_12] [i_12] [i_12] [i_0]))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_33 = ((/* implicit */_Bool) 276106355);
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            {
                                arr_52 [(_Bool)1] [i_0] [i_14] [i_13] [i_13] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)46743);
                                var_34 |= ((/* implicit */unsigned long long int) (-(-537212165)));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)144))))));
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-6895))));
                    arr_56 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)112))));
                }
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 23; i_17 += 3) /* same iter space */
                {
                    arr_60 [i_0] = ((/* implicit */signed char) (!((_Bool)1)));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 3; i_19 < 20; i_19 += 4) 
                        {
                            {
                                var_37 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)47))));
                                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_19 + 2] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) 0U))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4079522743U)) ? (((/* implicit */int) (short)-6895)) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
}
