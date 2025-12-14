/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76475
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_10))));
    var_18 = ((short) max((max((var_14), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (1125899873288192ULL) : (1125899873288177ULL))))))) == ((-(((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) min((1125899873288201ULL), (((/* implicit */unsigned long long int) var_11)))))), (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */signed char) (_Bool)1)))))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (2980466560710683213LL)))))));
            arr_5 [i_0] [i_0] [i_0] = (~(((unsigned int) arr_3 [i_1] [i_1] [i_1])));
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) var_14);
    }
    for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        arr_18 [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (min((((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_4])), (arr_7 [i_2] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_5]))));
                        arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) 1905846417U);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_5] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_2] [i_5])) : (((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_2] [i_2] [i_2]))))) : (18445618173836263402ULL)))))));
                        arr_20 [i_2 - 2] [i_2 - 2] [i_4 - 1] = ((_Bool) ((18445618173836263448ULL) << (((((/* implicit */int) var_8)) + (56)))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((short) arr_13 [i_4] [i_3] [i_4] [i_4]))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (var_6)))))), ((+(((/* implicit */int) arr_12 [i_4 - 1] [i_3] [i_2 - 1])))))))));
                    }
                } 
            } 
            arr_21 [i_2] [i_2] = ((/* implicit */signed char) max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */short) ((max((((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])), (2777661476U))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)3584))))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_31 [i_2] [i_2] [i_2 + 3] [i_2] [i_8] = ((/* implicit */_Bool) (-(min((arr_29 [i_8] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_8]), (arr_29 [i_8] [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2])))));
                            arr_32 [i_7] [i_7] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_1))))), (1125899873288198ULL)))));
                            var_22 = min((((18445618173836263418ULL) % (18445618173836263436ULL))), (min((((/* implicit */unsigned long long int) (short)-31024)), (18445618173836263395ULL))));
                            var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_26 [i_2] [i_3] [i_6] [i_7] [i_3])) ? (arr_26 [i_2 - 4] [i_3] [i_6] [i_7] [i_8]) : (arr_26 [i_2 - 1] [i_2] [i_2 - 4] [i_2 + 1] [i_2 - 4]))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((1125899873288236ULL) < (((/* implicit */unsigned long long int) 2389120878U))))), (((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_6] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_26 [i_2] [i_3] [i_3] [i_3] [i_6]))))), (((/* implicit */unsigned long long int) -6851832591114124234LL)))))));
            }
            arr_33 [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_8)))))) * (((unsigned int) arr_22 [i_2] [i_2] [i_2 - 2]))));
        }
        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(min((((((/* implicit */_Bool) -8019827561012443323LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) arr_36 [i_2 - 4])))))))));
            arr_37 [i_2] [i_2] = (short)3575;
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                arr_40 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) arr_39 [i_2 + 2] [i_2 - 3] [i_9] [i_10]));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_34 [i_2] [i_2 - 1])));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(18445618173836263417ULL))))));
                            arr_46 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_11 - 1])) ? (arr_8 [i_11 - 1]) : (arr_8 [i_11 + 2])));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            arr_49 [i_2] [i_13] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((18445618173836263410ULL) + (((/* implicit */unsigned long long int) 1627393105))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_2] [i_13] [i_13] [i_2])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_27 [i_13] [i_13])))), (min((((((arr_35 [i_2] [i_2]) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_2] [i_13] [i_13])) - (205))))), ((-(((/* implicit */int) arr_24 [i_2] [i_2] [i_13]))))))));
            arr_50 [i_13] [i_13] = (-(((((/* implicit */_Bool) 18445618173836263456ULL)) ? (((((/* implicit */_Bool) 225694058U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) : (18445618173836263401ULL))) : (((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_13] [i_2] [i_2]) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_12))))))));
            arr_51 [i_2] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) min((var_0), (arr_48 [i_2 - 3])))) + ((~(((/* implicit */int) arr_48 [i_2 + 2]))))));
        }
        var_28 = ((/* implicit */unsigned short) arr_27 [i_2 - 4] [i_2 + 3]);
        var_29 = ((/* implicit */unsigned long long int) max((var_29), ((~(var_14)))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2]))))) ? ((-((+(((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))))) : ((-(arr_35 [i_2] [i_2]))))))));
    }
}
