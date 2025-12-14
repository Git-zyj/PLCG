/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67111
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)9365)) : (((/* implicit */int) (short)17747))))) - ((+(27U)))));
            var_19 = ((/* implicit */short) max((max((((/* implicit */unsigned char) arr_2 [i_0] [i_1 + 2])), (arr_1 [i_0]))), (arr_1 [i_1 + 2])));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) (~((~(max((268431360U), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 4; i_2 < 12; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((arr_10 [i_5]) + (19457353)))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4026535936U)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_11 [i_2] [i_4 + 1] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4 + 1] [i_5])) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_5])) : (((/* implicit */int) var_11)))))));
                        arr_17 [i_2] [i_5] = ((/* implicit */unsigned short) var_9);
                        var_22 = ((/* implicit */long long int) var_14);
                    }
                } 
            } 
        } 
        arr_18 [i_2] [i_2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)137))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_15))));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [(short)5])), (max((4026535936U), (((/* implicit */unsigned int) arr_20 [i_6]))))))), (((long long int) arr_19 [i_7] [i_6]))));
            var_25 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_23 [i_7])) - (((/* implicit */int) arr_23 [i_7])))) > (((((/* implicit */_Bool) arr_23 [(signed char)8])) ? (((/* implicit */int) (short)-2198)) : (var_0)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_8 = 4; i_8 < 13; i_8 += 1) /* same iter space */
            {
                arr_28 [i_7] [i_7] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_12)))) ^ (((/* implicit */int) arr_23 [i_8 + 3]))));
                arr_29 [3U] [i_7] [3U] = ((/* implicit */short) ((unsigned short) 4026535950U));
            }
            for (short i_9 = 4; i_9 < 13; i_9 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-112)), (var_7)))))))))));
                arr_32 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) arr_27 [i_9 + 1] [i_9 - 2] [(_Bool)1]))), ((~(178261625U)))));
            }
            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))) + (4116705678U)));
        }
        for (unsigned int i_10 = 3; i_10 < 16; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) min(((-(arr_21 [i_10 - 3]))), (((/* implicit */int) (short)32767))));
            arr_36 [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((4778171893268614880ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))))));
        }
        arr_37 [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((13668572180440936717ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27296))))) : (max((((arr_33 [i_6] [i_6] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))), (((/* implicit */unsigned long long int) arr_24 [(_Bool)1]))))));
        var_29 = ((/* implicit */unsigned char) var_1);
    }
    var_30 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
            {
                arr_46 [i_13 - 1] [i_11] [i_11] [(unsigned char)10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)0))));
                arr_47 [i_13] [i_13] [i_13] [i_11] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)143)) ? (13668572180440936736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) var_7)) : (-302936743))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))) ^ (4778171893268614880ULL)));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_53 [i_12] [i_12 - 1] [i_11] [i_13 + 1] [i_13 + 1]) : (arr_49 [i_11] [i_11] [i_12 + 1] [i_13 - 2] [i_13 + 1] [i_13 - 1])));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_11] [i_11] [i_15]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 409101776692058568LL)) ? (((/* implicit */int) arr_52 [i_11] [6U] [i_14] [i_13] [(unsigned char)13] [i_11])) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37153))) : (-409101776692058569LL)))));
                            arr_54 [i_11] [(unsigned short)12] [(_Bool)1] [i_11] [i_14] [i_11] = ((/* implicit */long long int) (unsigned char)128);
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                arr_57 [i_11] [i_11] = ((/* implicit */unsigned char) (+(max((max((13668572180440936735ULL), (((/* implicit */unsigned long long int) -409101776692058583LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)9955)))))))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 18; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((long long int) (+((+(((/* implicit */int) arr_43 [i_11] [i_11] [i_11] [(signed char)5]))))))))));
                            arr_62 [3ULL] [i_12] [3ULL] [i_17] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_48 [i_11] [i_11] [i_16] [i_17] [i_18]))))))));
                            var_35 += ((/* implicit */short) ((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)-21))));
                        }
                    } 
                } 
            }
            arr_63 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)10)), ((unsigned char)111)))) & (((/* implicit */int) ((((/* implicit */_Bool) min((arr_51 [i_12] [i_11] [i_11] [i_11]), (((/* implicit */unsigned short) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned char)66)))))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_36 = arr_48 [3LL] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_19];
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (+(409101776692058564LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_11] [i_11]))))) : (((unsigned long long int) (~(((/* implicit */int) arr_51 [i_19] [i_11] [i_11] [i_11])))))));
                var_38 = ((/* implicit */_Bool) -409101776692058579LL);
                arr_67 [i_12] [i_11] = max((max((max((((/* implicit */long long int) (unsigned short)38917)), (var_9))), (((/* implicit */long long int) (unsigned char)255)))), (((/* implicit */long long int) max(((unsigned char)145), (((/* implicit */unsigned char) (signed char)-3))))));
            }
        }
        arr_68 [(short)12] |= max((((/* implicit */unsigned int) (signed char)62)), (4294967295U));
        var_39 = (short)(-32767 - 1);
    }
}
