/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72800
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1016ULL)) ? (-9223372036854775785LL) : (((/* implicit */long long int) var_7))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */long long int) 18446744073709550614ULL);
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 872351378)) ^ (var_1)));
                                var_18 = ((/* implicit */int) (-(9223372036854775807LL)));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) var_10)), (max((arr_10 [i_0] [i_0] [i_5] [i_3] [i_0] [i_3]), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) min(((short)20997), (((/* implicit */short) (_Bool)0))))))))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((-(min((((/* implicit */unsigned int) var_8)), (var_1))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (short)-15311)) & (((/* implicit */int) (_Bool)1)))))))))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((((_Bool)1) ? (1458412190) : (arr_5 [i_2 + 1] [i_1 - 1] [i_0] [i_0]))), (((/* implicit */int) (unsigned char)218)))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1458412190)) ? (-1458412183) : (1004882753)))) ? (((/* implicit */int) ((short) (unsigned char)111))) : (-1458412193)))) <= (var_11)));
                                var_23 = ((/* implicit */signed char) ((long long int) (short)-20997));
                            }
                            for (int i_7 = 2; i_7 < 15; i_7 += 2) 
                            {
                                var_24 = ((long long int) -9223372036854775785LL);
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 871108416)), (max((var_5), (1493464836U)))))) : (((((/* implicit */_Bool) -5354734769849723644LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3])))))))));
                            }
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) min((-1876360132520529817LL), (((/* implicit */long long int) -1339510625)))))));
                            var_27 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-28)), ((short)9068))))) & (((long long int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) arr_17 [i_8] [i_8]);
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (short)2130)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(unsigned short)8] [(unsigned short)8]))) : (1328523156U))))));
            var_30 = ((/* implicit */long long int) min((var_30), (min((((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_19 [i_9] [i_8])) / (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (-2147483647 - 1))), (9223372036854775807LL)))) ? (min((arr_20 [14LL]), (((/* implicit */long long int) var_3)))) : (max((var_13), (((/* implicit */long long int) var_11))))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 811889122U)), (-9223372036854775788LL)));
            var_32 = ((/* implicit */short) var_6);
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) -4981331856187409904LL);
            var_34 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)102))))) / ((-(-6898708851249529573LL)))))) ? (min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 6898708851249529577LL)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (signed char)-15))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19797)))))));
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((var_7) << (((var_1) - (4060414016U)))))) ? (min((((/* implicit */long long int) (signed char)0)), (7374977036109784317LL))) : (((/* implicit */long long int) ((unsigned int) 2066524494U))))) : (((long long int) 2066524494U))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((var_7) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_8] [i_12] [i_12])))))))));
                    var_37 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)170)), (var_7)))))), (((((/* implicit */_Bool) max((arr_18 [3]), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-72), (arr_21 [i_13] [7] [(signed char)18]))))) : (var_13)))));
                    var_38 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -4990205677980186483LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (4990205677980186483LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-22)))))))) ? (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56431))))) : (((((/* implicit */_Bool) ((7374977036109784317LL) - (((/* implicit */long long int) -2147483645))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13]))) : (-7374977036109784306LL))));
                }
                var_39 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                var_40 = ((/* implicit */unsigned char) ((max((var_9), (9223372036854775806LL))) >= (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)39527), (((/* implicit */unsigned short) var_3))))))));
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) var_5);
                            var_42 |= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)1))));
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)102)), (var_4))))))) ? (((((/* implicit */_Bool) 4990205677980186482LL)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)39749)), (0U)))) : (((((/* implicit */_Bool) 5354734769849723646LL)) ? (-4586101163968043493LL) : (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) var_11))));
                var_44 = max((((/* implicit */long long int) 2839051261U)), (4862352679065704978LL));
                var_45 &= ((/* implicit */signed char) 5354734769849723643LL);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_9)) <= (arr_22 [i_8] [i_17])));
            var_47 = ((/* implicit */unsigned short) ((var_9) & (-7374977036109784317LL)));
            var_48 = ((/* implicit */int) ((((/* implicit */long long int) ((885625063U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)18030)))))) | (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (21LL)))));
        }
        var_49 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_4)) ? (-867568463) : (((/* implicit */int) var_10))))) - (var_1)));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_50 = ((/* implicit */int) (_Bool)1);
            var_51 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [i_18]))) & (1369730687U)));
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
        {
            var_52 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 2562455649U))) ? (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (short)19174))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            var_53 = ((/* implicit */unsigned char) var_3);
            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((-12) * (((/* implicit */int) var_3)))))));
        }
    }
    for (long long int i_20 = 2; i_20 < 19; i_20 += 2) 
    {
        var_55 |= ((/* implicit */_Bool) min(((unsigned short)18), (((/* implicit */unsigned short) (signed char)15))));
        /* LoopNest 3 */
        for (short i_21 = 0; i_21 < 21; i_21 += 3) 
        {
            for (short i_22 = 2; i_22 < 20; i_22 += 3) 
            {
                for (unsigned int i_23 = 1; i_23 < 19; i_23 += 2) 
                {
                    {
                        var_56 = (+(22LL));
                        var_57 = ((/* implicit */long long int) (short)-9420);
                    }
                } 
            } 
        } 
    }
}
