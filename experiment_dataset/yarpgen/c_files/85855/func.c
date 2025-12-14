/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85855
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
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (((_Bool)1) ? (5536139251277984888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12875)))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_1)))), (1627421248)));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) -1627421248);
                    arr_11 [i_2] [i_2] = ((/* implicit */int) ((short) max((((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_0] [i_0])))), (1627421248))));
                    arr_12 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) -878281716);
                    var_13 = ((/* implicit */unsigned char) (+(7760826620620445337ULL)));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_21 [i_5] [i_3] [i_3] = ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_3] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_3]))))) : (((((/* implicit */_Bool) 5854721193184086693LL)) ? (-5854721193184086693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20852))))));
                    arr_22 [i_5] [i_5] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_5])) : (arr_1 [i_3] [i_4])))) || (((/* implicit */_Bool) arr_3 [i_3]))));
                }
            } 
        } 
        arr_23 [i_3] [i_3] = arr_10 [i_3];
    }
    for (short i_6 = 2; i_6 < 13; i_6 += 2) 
    {
        arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29663)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10945847319446286215ULL)));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) var_9);
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_15 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)29655)))))))));
                        arr_38 [i_6] [i_7] [i_9] = ((unsigned long long int) arr_2 [i_7] [i_8]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_7] [i_8]))))) == (max((arr_33 [i_6] [i_7] [i_8]), (((/* implicit */long long int) arr_0 [i_6]))))))), (((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((+(((/* implicit */int) arr_0 [i_8])))) : (((int) arr_34 [i_6] [i_6] [i_6]))))));
                        arr_42 [i_6] [i_7] [i_8] [i_10] = ((/* implicit */short) ((unsigned char) (+(((3357216745034888322LL) | (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        arr_43 [i_6] [i_6] [i_10] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)13860)) ? (arr_34 [i_10] [i_7] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_8] [i_10])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(11543379933637489347ULL)))) ? (((((/* implicit */int) (short)12656)) & (878281715))) : ((+(((/* implicit */int) arr_3 [i_6])))))))));
                        arr_44 [i_6] [i_7] [i_8] [i_10] = (+((~(((/* implicit */int) max((arr_7 [i_10]), (((/* implicit */short) var_6))))))));
                        arr_45 [i_6] [i_10] [i_8] [i_10] [i_10] [i_10] = ((/* implicit */int) (short)-28959);
                    }
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_32 [i_6] [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) (short)-20136)) ? (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6])) : (4053344718589324037ULL)))))) ? (arr_1 [i_6] [i_6]) : (((((/* implicit */_Bool) -878281716)) ? (((/* implicit */int) (unsigned short)21256)) : (((/* implicit */int) (unsigned short)46881))))));
        arr_46 [i_6] = ((/* implicit */unsigned char) ((short) arr_1 [i_6] [i_6]));
    }
    for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        arr_49 [i_11] = ((/* implicit */_Bool) var_2);
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_18 = ((/* implicit */short) (((-(((long long int) 1848440669)))) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_11])))));
            var_19 = arr_26 [i_11] [i_12];
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_24 [i_11] [i_11])))))))) - (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_31 [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_11] [i_11]))))) : ((~(1457580736304812438LL)))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 878281715)) ? (878281687) : (((/* implicit */int) (short)-18768))));
}
