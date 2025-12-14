/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69875
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
    var_13 |= var_2;
    var_14 = ((/* implicit */int) (_Bool)0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(arr_3 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(3001056957046938792LL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_8 [17U] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-2147483622) + (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_7 [i_1])))) : (max((((/* implicit */unsigned long long int) (short)-8311)), (var_6)))));
        arr_9 [i_1] = ((/* implicit */int) min((((unsigned short) (+(((/* implicit */int) (_Bool)0))))), (min((max(((unsigned short)36443), (((/* implicit */unsigned short) (signed char)-31)))), (((/* implicit */unsigned short) (_Bool)1))))));
        var_16 = ((4971870358182814304LL) / (((/* implicit */long long int) -973951270)));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4971870358182814321LL)) ? (((/* implicit */long long int) min((1228365907), (-1292877463)))) : (-1LL))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (signed char)-1))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_8))));
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(1895906173)))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 1577652677)) : (var_11)))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 3; i_4 < 9; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1454398479)) && (((/* implicit */_Bool) var_4))));
                    arr_25 [i_3] [i_4] [i_4 - 1] [i_4] [i_6] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)1)) % ((-(((/* implicit */int) (unsigned short)29083))))))));
                    var_23 = ((/* implicit */_Bool) (-(max((((/* implicit */int) max((((/* implicit */short) (unsigned char)200)), (var_8)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (signed char)-73))))))));
                }
                arr_26 [i_4] [i_4] [8] [i_4] = ((/* implicit */int) (!((_Bool)1)));
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 4; i_7 < 9; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_35 [(unsigned short)8] [(unsigned short)8] [i_4] [i_7] [(unsigned short)8] [i_4] [i_9] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9))));
                            var_24 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-7951583361886483326LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))));
                            arr_36 [i_3] [i_4] [i_4] [i_7] [i_4] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3483822196U)) ? (((/* implicit */int) (unsigned short)41395)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 1988018736)) ? (((/* implicit */int) arr_13 [i_4 - 3])) : (((/* implicit */int) arr_10 [i_7 + 1])))) : (((/* implicit */int) ((2854010234U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_37 [i_3] [9U] [i_3] [i_4] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16018))) : (var_6)));
                            arr_38 [i_3] [i_4] [i_3] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_2) : (((((/* implicit */int) (_Bool)1)) ^ (arr_22 [i_3] [i_8] [i_4])))))) ? (((/* implicit */unsigned long long int) ((4630019796232259218LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((unsigned long long int) 1182022727)) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (2012508401))))))));
                        }
                    } 
                } 
            } 
            arr_39 [8ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (2032455084162506406LL)))) ? (((/* implicit */int) (unsigned short)29083)) : (((/* implicit */int) min(((unsigned short)49512), (((/* implicit */unsigned short) (unsigned char)249)))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_25 &= ((/* implicit */_Bool) -676988453);
                var_26 = ((/* implicit */_Bool) (unsigned char)51);
                arr_42 [i_4] [i_4] [i_10] [i_10] = ((/* implicit */unsigned long long int) 358931841);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    arr_48 [i_3] [i_4 - 1] [i_4 - 1] [i_4] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? ((-(-932382605))) : (((((/* implicit */_Bool) -1133164785)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / ((+(var_7)))))));
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_46 [i_3] [i_4 - 3] [i_11] [i_12] [i_4 - 1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))) >> (((((var_9) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) - (18446744073709542283ULL)))));
                    var_28 -= ((/* implicit */long long int) (signed char)-1);
                    arr_49 [i_3] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_12) : (var_12))) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))) : (((/* implicit */long long int) 2966360016U))));
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                {
                    var_29 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 932382605)) % (var_6)))) ? ((+(184417381))) : (((((/* implicit */int) arr_13 [i_11])) * (((/* implicit */int) arr_51 [i_4] [i_13] [i_4 - 3])))));
                    arr_53 [i_4] [i_4] [i_4 - 2] [i_4] [i_11] [i_4] = ((/* implicit */_Bool) (unsigned short)0);
                    var_30 = ((/* implicit */int) (+(var_7)));
                }
                for (int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                {
                    arr_56 [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) 3991206177U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12))), (((/* implicit */long long int) arr_41 [(_Bool)1] [i_4 - 2] [6]))))));
                    arr_57 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (max((var_7), (((/* implicit */unsigned long long int) var_5))))))) ? (min((min((((/* implicit */int) var_9)), (-2068799999))), (((/* implicit */int) arr_41 [i_3] [i_11] [i_3])))) : (((/* implicit */int) (_Bool)1))));
                }
                var_31 ^= ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (1986249715)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)58553)))) : (262080U))))));
            }
        }
        for (int i_15 = 3; i_15 < 9; i_15 += 4) /* same iter space */
        {
            arr_60 [0U] [i_15] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)1))))));
            arr_61 [i_3] [2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37722)) + (((((/* implicit */_Bool) -4630019796232259214LL)) ? (((/* implicit */int) arr_14 [i_3] [i_15])) : ((~(-442527864)))))));
            arr_62 [i_3] [i_3] [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned short)15)), (0ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)154)), ((-2147483647 - 1))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)66))))))) : (((/* implicit */long long int) -859661483))));
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) ((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_16 - 1] [i_16 - 1]))) : (var_4))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) ^ (((/* implicit */int) (unsigned char)214)))))));
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */int) ((unsigned short) ((arr_30 [i_16]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]))) : (arr_43 [i_16] [i_16] [i_19] [i_19]))));
                            var_34 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) (unsigned short)29174)), (5784660628326567875ULL))) : (((/* implicit */unsigned long long int) -7951583361886483341LL))));
                        }
                    } 
                } 
            } 
        }
        var_35 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(4630019796232259225LL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (var_2)))) : ((~(((/* implicit */int) (_Bool)1))))))));
        var_36 = ((/* implicit */int) max((max((((/* implicit */long long int) arr_1 [i_3])), (6702807387051055043LL))), (((/* implicit */long long int) arr_41 [i_3] [i_3] [(signed char)1]))));
        arr_72 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
        var_37 = ((/* implicit */unsigned int) max((4630019796232259215LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) -2092339233)))))));
    }
}
