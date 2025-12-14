/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86870
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
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(signed char)16] [i_1] = arr_1 [i_0];
                var_19 = ((/* implicit */signed char) ((unsigned char) max(((unsigned char)98), (((/* implicit */unsigned char) (_Bool)0)))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) arr_1 [i_0])) > (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)48))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (max((var_7), (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (short)28379)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((signed char) var_2));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2])))))))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_2])) : (var_11)))));
        arr_8 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
    }
    for (int i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)28379))))))), (var_14)));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_25 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_19 [7LL]), (var_15)))) || ((!(((/* implicit */_Bool) (unsigned char)193)))))), (((_Bool) ((signed char) 1838354958)))));
                        var_26 = ((/* implicit */int) min((var_26), (((((((/* implicit */_Bool) arr_7 [i_3 + 2])) || (((/* implicit */_Bool) 1838354943)))) ? (max((((/* implicit */int) (_Bool)1)), (1838354943))) : (min((var_18), (((/* implicit */int) arr_7 [i_3 - 2]))))))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_3 - 2])) == (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_19 [i_3 + 2]))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) max((-1838354965), (((/* implicit */int) ((((/* implicit */unsigned int) var_11)) <= (((unsigned int) var_11)))))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [i_3 - 2])) : (((/* implicit */int) arr_0 [i_3 + 2]))));
            var_30 = ((/* implicit */unsigned char) var_3);
            var_31 = ((/* implicit */int) min((var_31), (((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_21 [i_3] [i_7])) : (arr_15 [i_3] [(unsigned short)0] [i_7]))) - ((+(((/* implicit */int) arr_4 [i_3]))))))));
            var_32 -= ((((/* implicit */int) ((((/* implicit */_Bool) -1838354943)) && (((/* implicit */_Bool) (unsigned char)52))))) << (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_7])) == (((/* implicit */int) var_8))))));
        }
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (unsigned char)211))));
    }
    var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1073733632U) - (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_2))))) : (var_12)))) ? (((/* implicit */unsigned long long int) (-(((unsigned int) -77543047546402456LL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_14)))))));
    var_35 -= ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))))));
}
