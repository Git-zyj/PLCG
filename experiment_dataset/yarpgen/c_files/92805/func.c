/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92805
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
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) == (max((((/* implicit */unsigned long long int) var_10)), (var_1)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) 5388251623548252262ULL)) ? (var_15) : (((/* implicit */long long int) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 4; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_3 + 2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5388251623548252262ULL)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0])) : (var_2)))))))));
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 3406662841U)), (5388251623548252262ULL))) == (((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (13058492450161299354ULL)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [(unsigned short)5] [i_4]))) & (((var_15) & (((/* implicit */long long int) 888304459U))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((5388251623548252262ULL), (13058492450161299360ULL)))))) ? (((/* implicit */long long int) (+(arr_10 [i_3 - 4] [i_3 - 4] [12])))) : ((-(((((/* implicit */_Bool) 2130221126U)) ? (arr_0 [i_3]) : (var_3)))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_1]))));
            var_23 &= ((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */long long int) ((((int) arr_4 [i_0] [i_0])) > (((/* implicit */int) arr_7 [i_0] [i_1])))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((arr_6 [i_5] [i_5] [i_7]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [(unsigned short)23] [i_0] [i_0] [(short)14]))) / (3779956382366672396ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(unsigned short)2] [(unsigned short)2] [i_1] [i_5] [i_1] [i_7] [i_7])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_6] [i_1] [i_6] [i_7] [i_7] [i_6])))))));
                            var_25 = (unsigned short)47295;
                            arr_23 [i_0] [i_1] [i_5] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13058492450161299340ULL)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_6] [i_0] [i_7])) : (((/* implicit */int) (unsigned short)64395))))) ? (((/* implicit */unsigned long long int) var_10)) : (7663102206222236194ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3406662841U)) ? (((/* implicit */int) (unsigned short)18241)) : (arr_10 [i_0] [i_0] [i_7]))))))) : (((/* implicit */int) var_18))));
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (arr_10 [i_0] [i_0] [i_5]))))));
                        }
                    } 
                } 
            } 
            var_26 &= ((/* implicit */signed char) arr_4 [i_0] [i_1]);
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_0] [(unsigned short)13] [i_9] [i_0])) - (((/* implicit */int) arr_11 [i_0] [i_8] [i_9] [i_10] [i_10]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            arr_33 [i_0] [i_9] [i_9] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(1758468451))) % (((/* implicit */int) (unsigned short)47287))));
                            arr_34 [(unsigned short)5] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38928)) * (((/* implicit */int) ((unsigned char) arr_6 [i_0] [(unsigned short)0] [i_0])))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 5388251623548252257ULL)) ? (13058492450161299354ULL) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0]))));
                        }
                        for (short i_12 = 1; i_12 < 21; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)25861))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((13058492450161299356ULL) != (((/* implicit */unsigned long long int) ((888304455U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39692))))))))));
                            arr_37 [i_0] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */_Bool) arr_8 [(signed char)0] [(signed char)0] [i_9] [i_9] [11U] [i_9]);
                        }
                        arr_38 [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 332073753238775303LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_13))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)83)))))));
                        var_31 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)52589)))) / (((/* implicit */int) arr_1 [i_9] [i_9]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) var_18);
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        arr_43 [i_8] [i_13] [i_14] = ((/* implicit */unsigned int) (-(arr_0 [i_14])));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)47295))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38943)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (888304445U))))));
                        var_34 = ((/* implicit */unsigned int) ((short) arr_42 [i_13] [i_14] [i_8] [7U]));
                        var_35 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_41 [i_0] [i_8])) < (((/* implicit */int) var_5)))));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) -8063827297010963927LL))));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */signed char) 5388251623548252259ULL);
        var_38 = ((/* implicit */short) ((unsigned short) ((signed char) -332073753238775304LL)));
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((signed char) -8063827297010963927LL)))));
    }
    var_40 = ((((/* implicit */_Bool) (+(-332073753238775304LL)))) ? (max((17568000814573239003ULL), (((/* implicit */unsigned long long int) 3160587670U)))) : (((/* implicit */unsigned long long int) var_10)));
}
