/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6743
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
    var_15 += ((/* implicit */long long int) min((((((/* implicit */int) ((_Bool) var_6))) % (((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!((_Bool)1))))));
        arr_2 [i_0] [i_0] = ((unsigned int) var_6);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2] [i_3]);
                            arr_15 [i_0] [i_2] [(unsigned short)4] [i_2] [i_4] &= 1156496088U;
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((arr_12 [i_1 - 1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [20U] [i_0] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])))))));
        }
        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_5 + 1] [i_0] [i_5 - 1] [i_0] [i_0] [(_Bool)1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)14] [i_0] [i_0]))) ^ (arr_6 [i_0] [i_5] [i_0] [i_0]))))), (((/* implicit */unsigned int) min((((_Bool) (unsigned short)1)), (var_6))))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                for (long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */long long int) ((((_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_0] [i_7])) : (((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_14 [i_7] [i_7] [i_8] [i_7] [i_8] [i_8] [i_7]))))))) : (min((((/* implicit */long long int) arr_17 [i_0])), (((arr_11 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) var_12))))))));
                            var_20 += ((/* implicit */signed char) arr_1 [i_0]);
                            arr_27 [i_6] [i_7 - 1] [i_5 - 1] [i_5 - 1] [i_6] = ((/* implicit */_Bool) max(((~(max((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0])), (-436547241619403354LL))))), (((/* implicit */long long int) var_14))));
                        }
                    } 
                } 
            } 
            arr_28 [i_0] [i_5 - 1] = ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_0] [i_0] [i_0]))) ? (((unsigned int) 2802564338U)) : ((-(2438855411U))));
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_5] [i_9] [(unsigned short)7] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) ((signed char) 277535497623224512LL))) : (((/* implicit */int) ((_Bool) var_10))))))));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [20U] [i_11])) || (((/* implicit */_Bool) 835814789U))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) arr_20 [i_5] [i_5 + 1]);
        }
        for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 3; i_14 < 21; i_14 += 3) 
                {
                    {
                        arr_46 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)))), ((signed char)-120)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65201))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_10))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((signed char) ((((/* implicit */_Bool) 3894188184U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [0LL] [i_0])))))))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1156496076U)) ? ((~(((long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
    }
    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) var_5);
        arr_49 [i_15] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_15] [11U])) ? (((/* implicit */int) arr_48 [i_15] [i_15])) : (((/* implicit */int) arr_48 [i_15] [i_15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))) : (1322880978U))));
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((signed char)125), (var_13))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_50 [i_16]))))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((arr_50 [i_16]), (((/* implicit */unsigned int) var_0))))))));
        var_28 -= 2824824131U;
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8182777263932798766LL)) ? (2814979065U) : (2869231696U)));
            arr_54 [12LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_17]))));
            arr_55 [i_16] [i_17] [i_16] = ((unsigned int) var_9);
            arr_56 [i_16] [i_16] [(_Bool)1] = ((/* implicit */unsigned short) arr_48 [i_16] [i_17]);
        }
        for (signed char i_18 = 2; i_18 < 23; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                for (unsigned int i_20 = 1; i_20 < 23; i_20 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) arr_47 [i_16]);
                        arr_64 [i_16] [(unsigned short)6] [i_18] [i_20] [i_16] = ((/* implicit */_Bool) ((long long int) max(((+(3138471220U))), (((/* implicit */unsigned int) var_10)))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1479988230U) & (3894188188U)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) 0U)))));
                    }
                } 
            } 
            arr_65 [i_18] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_9)));
        }
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            var_32 += ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
            arr_68 [i_16] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) arr_53 [i_21] [i_21] [i_16])))), ((~(((/* implicit */int) arr_51 [i_16]))))))), (var_8)));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_62 [i_16] [i_21]))));
            var_34 -= ((/* implicit */long long int) max((((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))) : (400779125U))), (var_4)));
        }
        /* LoopSeq 4 */
        for (unsigned short i_22 = 1; i_22 < 23; i_22 += 2) 
        {
            var_35 |= ((/* implicit */unsigned int) ((unsigned short) var_13));
            var_36 += var_11;
            /* LoopNest 3 */
            for (signed char i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                for (unsigned int i_24 = 2; i_24 < 23; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [8U] [i_23] [i_22 + 1]))) > (arr_57 [(unsigned short)0] [i_16] [i_22 + 1]))));
                            arr_78 [i_16] [11U] [17U] [i_16] [i_16] = ((/* implicit */signed char) 3516403951U);
                            arr_79 [i_16] [13U] [i_23] [i_23] [i_24 + 1] [i_25] = ((/* implicit */_Bool) min((((((/* implicit */long long int) 400779100U)) - (((((/* implicit */_Bool) 400779096U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6086023676229508511LL))))), (((/* implicit */long long int) ((_Bool) arr_51 [i_16])))));
                            var_38 = ((/* implicit */signed char) var_3);
                            arr_80 [i_16] [i_16] [i_16] [i_24] [i_16] = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) 3590430041U)) : (arr_59 [i_16] [i_22] [i_22])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_26 = 0; i_26 < 24; i_26 += 4) 
        {
            var_39 *= ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */int) arr_51 [i_16])) % (((/* implicit */int) var_7)))), (((/* implicit */int) var_6)))));
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 24; i_27 += 2) 
            {
                for (unsigned int i_28 = 2; i_28 < 21; i_28 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_27])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned int) var_2)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (84315008U)))))));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_47 [i_27]))))));
                        var_42 = ((/* implicit */unsigned short) var_9);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) arr_48 [i_16] [i_27]);
                            arr_91 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) 3894188174U);
                        }
                        for (signed char i_30 = 2; i_30 < 22; i_30 += 3) 
                        {
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_16] [i_26] [i_16])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_47 [i_28]))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))))));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)119), ((signed char)15)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62388)))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_2))) || ((!(((/* implicit */_Bool) var_7))))))))));
                        }
                    }
                } 
            } 
            var_46 = ((/* implicit */_Bool) (-(min((2932183529U), (var_9)))));
        }
        for (unsigned short i_31 = 1; i_31 < 23; i_31 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((arr_87 [i_16] [i_31 + 1] [(unsigned short)21] [(unsigned short)6] [i_16] [i_31 + 1]) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) % (3782740579U))))))));
            var_48 -= ((/* implicit */signed char) min(((-((((_Bool)1) ? (1479988230U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62405))))))), (var_9)));
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (!(var_6))))));
        }
        for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
        {
            arr_101 [i_32] [i_32] [i_32] = ((/* implicit */long long int) arr_73 [i_16] [i_16] [i_16]);
            arr_102 [i_16] [i_32] = ((2814979056U) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_8)), (arr_81 [i_32] [i_16] [i_16])))))));
        }
    }
}
