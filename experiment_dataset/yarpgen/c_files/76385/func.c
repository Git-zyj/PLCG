/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76385
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))) ? (((long long int) min((var_7), (var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [(signed char)13] [i_0])) < (((((/* implicit */_Bool) -4975875483310553472LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)2134))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 -= arr_3 [i_3 + 2];
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [(short)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((4975875483310553459LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))))))) : (((unsigned long long int) (_Bool)1))));
                                var_17 = ((((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 3] [i_3 + 4] [i_3 + 1] [i_3 + 4] [i_3 - 1])) >> (((9940194153547323567ULL) - (9940194153547323561ULL))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    arr_18 [i_0] [i_5] [i_0] [i_0] = max((((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_5 + 2] [i_5])) == (((/* implicit */int) (unsigned char)230))))), (var_2));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 - 1] [i_5])) ? (((((/* implicit */_Bool) (short)24020)) ? (((/* implicit */unsigned int) 800284866)) : (4003023768U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [(unsigned char)4])) : (((/* implicit */int) (signed char)85)))))))) : ((-(((-5821783172856646678LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
                }
                var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [16] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9726)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                arr_19 [i_0] [i_0] = var_1;
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((unsigned char)249), (arr_2 [i_0])))) ? (((-4094895982350778520LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))) > (((/* implicit */long long int) ((/* implicit */int) ((3641900809721588349ULL) < (11498107462842566348ULL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 3; i_6 < 23; i_6 += 4) 
    {
        var_21 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) arr_21 [i_6]))) : (((/* implicit */int) arr_21 [(short)8]))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_23 &= ((/* implicit */unsigned long long int) (+((+(((long long int) arr_21 [i_7]))))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_24 -= var_9;
                        /* LoopSeq 3 */
                        for (signed char i_11 = 1; i_11 < 17; i_11 += 2) /* same iter space */
                        {
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551604ULL)))) ? (((/* implicit */int) arr_32 [i_7] [i_10 + 1] [i_11 + 1] [i_10 + 1])) : (-1)))) ? (((/* implicit */int) arr_24 [i_10])) : (((/* implicit */int) (short)-1345)));
                            var_26 = ((/* implicit */unsigned short) ((max(((~(18446744073709551611ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8] [i_9] [i_10] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_9])))))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (_Bool)0))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) -1621138373831546960LL))));
                        }
                        for (signed char i_12 = 1; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_29 ^= ((((/* implicit */_Bool) (~(arr_20 [i_8])))) ? (((((/* implicit */_Bool) arr_20 [i_10 + 1])) ? (((/* implicit */int) arr_34 [i_12 - 1] [i_7] [i_7] [i_8] [i_7])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) arr_34 [i_12] [i_10] [i_9] [i_8] [i_7]))));
                            var_30 = (+(((((/* implicit */int) ((short) -8720201162554228799LL))) / (((/* implicit */int) ((short) arr_25 [i_8]))))));
                            var_31 = ((/* implicit */short) ((arr_20 [i_7]) + (((((var_4) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)19779))))) : (((((/* implicit */unsigned int) -418344893)) + (arr_27 [(short)2])))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 1; i_13 < 17; i_13 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (((((/* implicit */_Bool) (short)-6498)) ? (8329352261782473647ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6819))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_33 = ((/* implicit */signed char) ((short) ((short) 3480492145928837607LL)));
                            var_34 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_7] [(unsigned char)9] [0ULL] [i_10] [(signed char)7] [(unsigned char)9])) : (((/* implicit */int) arr_24 [i_7])))));
                            arr_43 [i_13 + 2] [i_10] [i_13] [i_8] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)25))));
                        }
                        var_35 = ((/* implicit */long long int) max((min((((/* implicit */int) (short)1807)), (((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (959992286))))), (((((/* implicit */_Bool) ((unsigned char) 3480492145928837635LL))) ? (((((/* implicit */int) (unsigned short)29326)) << (((((/* implicit */int) (unsigned short)59123)) - (59118))))) : ((-(((/* implicit */int) arr_35 [i_10 + 1] [i_10] [i_7] [i_8] [i_8] [i_7]))))))));
                    }
                } 
            } 
        } 
        var_36 = (~((~(((/* implicit */int) var_8)))));
        var_37 ^= ((/* implicit */int) 8533309599683875036LL);
    }
    var_38 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4294967282U)) : (1044480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    var_39 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (short)23958))) - ((~(((/* implicit */int) var_13))))));
}
