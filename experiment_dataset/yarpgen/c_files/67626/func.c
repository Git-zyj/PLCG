/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67626
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
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0 - 2] [i_0 - 2]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (10735218706154837LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)40)), ((unsigned short)65535)))) : ((-(((/* implicit */int) arr_4 [i_0] [(unsigned char)19] [(unsigned char)4])))))) - (((/* implicit */int) arr_3 [i_1]))));
            arr_5 [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max(((unsigned short)51815), (((/* implicit */unsigned short) (unsigned char)237))))) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [23])))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59193)) && (((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)(-127 - 1))));
                            var_24 = ((/* implicit */short) arr_12 [i_0] [i_2] [(unsigned short)18]);
                            arr_17 [i_0] [i_2] [i_3] [i_3] [(unsigned char)19] = ((/* implicit */short) arr_16 [15] [i_2] [(short)12] [i_3] [i_3] [i_2]);
                        }
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_21 [i_3] [(short)21] [i_3] [(_Bool)1] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((-4447942149655326407LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))))))));
                            var_25 = ((((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (7680LL))) : (((/* implicit */long long int) 4294967295U)));
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4447942149655326407LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 - 2])))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) var_7);
                        var_28 = ((/* implicit */signed char) ((short) 2466036118U));
                        var_29 = ((/* implicit */_Bool) -512229476);
                    }
                } 
            } 
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned short) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
            var_31 = ((/* implicit */int) ((unsigned int) (+(var_2))));
            var_32 = ((/* implicit */int) arr_16 [i_0] [i_2] [i_2] [i_0 - 3] [(_Bool)1] [i_0]);
            var_33 = ((/* implicit */unsigned char) (short)26572);
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) var_3)) - (989747807U))) == (((/* implicit */unsigned int) (-(-1572545394)))))) ? (((((/* implicit */_Bool) 1572545413)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7044625350406162608LL))) : (((long long int) (-(-1562156439007293637LL))))));
            var_35 = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (int i_8 = 3; i_8 < 24; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 2; i_9 < 24; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (short)23610)) : (((/* implicit */int) arr_24 [i_8] [i_8] [(unsigned short)6]))))) : (arr_10 [i_0] [i_11]))), (((/* implicit */unsigned int) arr_9 [(short)4]))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) max((((((/* implicit */int) ((var_19) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9] [i_11] [i_8])))))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_11] [i_11])) || (arr_33 [i_8] [(short)24] [(unsigned short)15] [i_11])))))), ((~(arr_11 [i_9 - 2] [i_8]))))))));
                        }
                    } 
                } 
            } 
            var_38 = var_4;
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (unsigned short)22760)) : (((/* implicit */int) (short)-32764))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_8 - 3] [i_8] [i_8] [9U] [i_8 - 1])) ? (((/* implicit */int) arr_30 [i_8] [i_8 + 1] [23U] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_30 [13U] [i_8 + 1] [i_8] [i_8 - 2] [i_8] [i_8]))))) : (15609503223705923578ULL)));
        }
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        arr_37 [i_12] = ((/* implicit */int) ((((((/* implicit */int) arr_15 [0ULL] [i_12])) <= (((/* implicit */int) arr_15 [i_12] [i_12])))) ? (max((((-7044625350406162587LL) + (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_12] [i_12]))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) -656351474)) ? (((/* implicit */int) var_11)) : (759104273))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)26565)))))))));
        var_40 = ((/* implicit */unsigned char) arr_34 [i_12]);
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) ((int) max((((/* implicit */long long int) (unsigned char)129)), (-3408339711227889928LL))))) ? (((unsigned long long int) 3388394525U)) : (((/* implicit */unsigned long long int) var_16)))))));
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (~(arr_29 [i_12] [i_12]))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (-7044625350406162608LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    /* vectorizable */
    for (short i_13 = 4; i_13 < 12; i_13 += 2) 
    {
        var_43 = ((/* implicit */_Bool) ((signed char) arr_9 [i_13 - 3]));
        var_44 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
        arr_42 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_13])) - (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_13 [i_13] [i_13] [(_Bool)1] [i_13] [i_13] [i_13])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_13 - 1] [(_Bool)1] [(unsigned short)13])))));
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_45 = ((/* implicit */unsigned char) var_17);
        var_46 = ((/* implicit */unsigned int) (((~(arr_8 [i_14] [i_14 + 1] [i_14]))) == (max((arr_8 [(short)21] [i_14 + 1] [(unsigned char)7]), (arr_8 [i_14] [i_14 + 1] [i_14])))));
        arr_45 [i_14] = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_1 [i_14 + 1] [i_14 + 1]))));
    }
    var_47 = ((/* implicit */unsigned int) -7044625350406162581LL);
    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)15)))) ^ (3444964058U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26567)))));
}
