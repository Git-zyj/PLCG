/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86238
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
    var_11 = ((/* implicit */signed char) var_9);
    var_12 |= ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) var_7);
                        var_14 = ((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)0)));
                        var_15 -= ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)32)) ? (((/* implicit */int) arr_5 [i_0] [(short)18] [i_0] [i_0])) : (((/* implicit */int) (short)-19029))))))));
                        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [(unsigned char)24]), (((/* implicit */unsigned long long int) 102639821))))) ? ((-(((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 1])))) : ((~(((/* implicit */int) (short)9687))))));
                    }
                } 
            } 
            var_17 += ((/* implicit */unsigned int) var_5);
        }
        /* LoopSeq 2 */
        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_6] [i_5] [i_7] [i_7] [i_0] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-32)) : (((/* implicit */int) (unsigned char)136))))));
                            var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            var_19 += ((/* implicit */signed char) ((68585259008ULL) / (((/* implicit */unsigned long long int) 6291456U))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) var_0));
                var_20 += ((/* implicit */unsigned short) var_1);
                arr_23 [i_0] [i_4 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_4])) : (((/* implicit */int) var_8))));
                arr_24 [i_0] [i_5] = ((/* implicit */signed char) var_5);
            }
            for (int i_8 = 3; i_8 < 23; i_8 += 3) 
            {
                var_21 |= ((/* implicit */unsigned char) max((arr_26 [i_8]), (((1875744233U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 + 1] [i_8 - 3] [i_4])))))));
                var_22 &= ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_4 [i_4] [i_4])), ((unsigned short)32949)))), (min((((/* implicit */unsigned int) var_2)), (4288675840U)))))));
            }
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)136)), (arr_25 [i_0] [i_0] [i_0] [21LL])))) ? ((((_Bool)1) ? (arr_10 [i_4] [(short)14] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [17] [i_0] [i_0] [17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [4] [i_0] [i_0] [i_0])))));
                var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_0])) : (((/* implicit */int) (short)3864))))) ? (((((/* implicit */int) arr_26 [i_0])) / (((/* implicit */int) arr_7 [i_0] [i_4] [i_9])))) : (((/* implicit */int) arr_12 [i_0] [i_4 - 2] [i_0]))))));
                var_25 = ((/* implicit */_Bool) (unsigned char)124);
            }
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) 2500910155U))));
            arr_33 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17293822569102704640ULL))));
        }
    }
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_27 += ((/* implicit */unsigned char) (short)-5152);
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            var_28 -= (short)9687;
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (arr_41 [i_11] [i_12] [i_13] [i_13])));
                arr_44 [i_11] [i_13] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (unsigned char)199)))));
                arr_45 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_5))) && (((/* implicit */_Bool) (short)-16384))));
                arr_46 [i_11] [i_12] [13] [(_Bool)1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)-9687))))));
            }
            var_30 += ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_11])), (arr_25 [i_11] [14U] [i_11] [i_11]))))));
            var_31 = ((/* implicit */unsigned int) var_7);
        }
        var_32 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1225400982U)) ? (((/* implicit */int) arr_41 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)496))))) && (((/* implicit */_Bool) arr_15 [i_11] [2U] [i_11] [i_11])))))));
    }
    var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4542458550225544874ULL)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-9661))))))) : (17293822569102704640ULL)));
}
