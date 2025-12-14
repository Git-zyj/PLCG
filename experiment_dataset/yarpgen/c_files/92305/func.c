/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92305
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)19698))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) ((unsigned char) (short)-23172))) ? (arr_1 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)4))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)19698)) : (((/* implicit */int) (short)19702))))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) (~(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */int) -2897520755102511570LL);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (arr_0 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 304987807U)))))))) ? (((long long int) (short)19698)) : (arr_1 [i_0])));
        var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)16134)))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_15)))))))));
            arr_8 [i_1] [(short)2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4554334381431920659LL)) || (((/* implicit */_Bool) -2041691607288545753LL)))) ? (4554334381431920667LL) : (((((/* implicit */long long int) 304987797U)) + (arr_1 [12LL])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    var_23 |= ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_1]))));
                    arr_15 [i_1] [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_1] [i_3] [i_4] [i_1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) ^ (2147483647))) > (((/* implicit */int) ((unsigned short) 461554768)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (140911058U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6])))))) | (((((/* implicit */_Bool) 3730789236344110313LL)) ? (4554334381431920665LL) : (((/* implicit */long long int) -908565120))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) arr_18 [i_7])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_7] [i_8] [23U])))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_6] [i_10] [i_6])))))));
                                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1285497984U)) && (((/* implicit */_Bool) var_16)))))) : (81787554U))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_27 [i_6] [i_7] [i_8] [i_6] [i_8] [i_7])) : (2147483647))), (2015152772)));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_2))));
                    var_31 = ((/* implicit */signed char) -1);
                }
            } 
        } 
        var_32 = ((/* implicit */short) arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            arr_31 [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)56968)) >= (((/* implicit */int) (signed char)127)))))));
            arr_32 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_6]))));
            /* LoopSeq 4 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_34 = ((((/* implicit */int) ((unsigned char) var_5))) ^ ((+(((/* implicit */int) arr_24 [i_6] [i_11] [i_11] [i_12] [i_13] [i_6])))));
                            arr_44 [i_6] [i_6] [i_6] [i_6] [(unsigned short)10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_14] [(short)22] [i_12] [i_11] [i_11] [i_6])) ? (((/* implicit */int) arr_43 [i_6] [8])) : (-461554783))))));
                        }
                    } 
                } 
            }
            for (signed char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned int) ((unsigned short) ((int) arr_36 [i_6] [i_6] [i_11] [i_11] [i_15])));
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_43 [i_15] [i_11]))))) ? (((((/* implicit */_Bool) (short)19692)) ? (var_8) : (((/* implicit */unsigned long long int) -2658034265205965748LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
                var_37 = ((/* implicit */_Bool) min((var_37), ((!(((/* implicit */_Bool) arr_35 [i_6] [4LL] [i_6]))))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_6] [i_6] [i_11] [i_11] [i_15] [i_6]))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (signed char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
            {
                arr_51 [i_6] [i_11] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) & (461554752)));
                arr_52 [i_6] [i_16] [i_11] [i_6] = ((/* implicit */unsigned char) (unsigned short)13657);
                arr_53 [i_6] = ((/* implicit */long long int) ((signed char) arr_26 [i_6] [i_11] [i_16] [i_11] [i_11] [i_11] [i_6]));
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) 3368312048U)) ? (arr_34 [i_16] [i_11] [i_16]) : (arr_34 [i_11] [i_11] [i_11]))))));
                var_40 = ((/* implicit */unsigned char) (-(((arr_39 [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6]))) : (2097120LL)))));
            }
            for (long long int i_17 = 1; i_17 < 23; i_17 += 1) 
            {
                arr_56 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_7);
                var_41 = ((/* implicit */int) var_17);
            }
            arr_57 [i_6] [i_11] [i_6] = ((/* implicit */unsigned short) (unsigned char)120);
            var_42 = ((/* implicit */_Bool) ((unsigned short) arr_22 [i_6] [0ULL] [(unsigned short)2]));
        }
        var_43 = ((/* implicit */int) -2220778840571874135LL);
    }
}
