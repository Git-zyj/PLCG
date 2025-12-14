/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8588
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) 1741126017U);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_14 = ((/* implicit */int) var_2);
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(max((min((((/* implicit */int) arr_5 [(unsigned short)3])), (var_13))), (var_1)))));
            }
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) min(((unsigned short)56767), ((unsigned short)56794)))) : ((~(((/* implicit */int) (unsigned short)62816))))))) ? (((unsigned int) (!(((/* implicit */_Bool) -2054889042))))) : (arr_6 [i_1] [i_1] [i_0])));
            var_16 = ((/* implicit */unsigned short) (((!(((((/* implicit */int) (unsigned short)40174)) == (536868864))))) ? (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1536)) ? (((/* implicit */int) var_12)) : (-2814264)))) : (((((/* implicit */_Bool) -2081377929)) ? (var_7) : (var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) (unsigned short)17710)))))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] [9U] [9U] = min((((/* implicit */unsigned int) ((int) -2081377929))), (min((arr_6 [(unsigned short)6] [i_3] [i_4 - 1]), (((/* implicit */unsigned int) (unsigned short)48487)))));
                        var_17 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) 2553841281U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (unsigned short)28579)) : (((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 2])))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) ((min((max((arr_17 [(unsigned short)10] [i_0] [(unsigned short)10] [i_0] [2] [i_3]), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (134217727)))))) << (min((((/* implicit */int) ((arr_6 [i_3] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29395)))))), ((+(arr_13 [3U] [i_0])))))));
            arr_21 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)62816)), (-624426541)))), (max((4172668126U), (((/* implicit */unsigned int) var_9)))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) var_11))))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_6] [i_0] [i_6])) : (var_4)))))));
            arr_24 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((122299169U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (min((arr_11 [i_0] [i_0]), (((/* implicit */int) (unsigned short)32633))))))) ? (min((((/* implicit */unsigned int) ((377702557) == (((/* implicit */int) arr_4 [i_6] [i_6]))))), (max((var_10), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14824)))));
            arr_25 [(unsigned short)10] [i_6] = ((/* implicit */unsigned short) max((((unsigned int) ((arr_11 [i_0] [i_6]) >= (var_13)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-624426541) : (((/* implicit */int) arr_16 [i_0])))))));
            var_20 = ((/* implicit */unsigned short) var_11);
        }
        var_21 = min((((((/* implicit */_Bool) 438920350U)) ? (((/* implicit */unsigned int) ((1072988409) / (var_1)))) : ((+(var_2))))), (((((/* implicit */unsigned int) (~(arr_11 [i_0] [5U])))) & (arr_14 [i_0] [i_0]))));
    }
    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 4) 
    {
        arr_28 [i_7 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_10)))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (var_8))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [18U] [i_7]))))))) >> ((-(((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
        var_22 = ((((/* implicit */_Bool) 3494011909U)) ? (var_6) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)14987))))) : (max((252614290U), (var_10))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            var_23 = max((((int) (~(((/* implicit */int) (unsigned short)26089))))), (((((/* implicit */_Bool) 2589521239U)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_5)))));
            var_24 = max((((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_26 [i_7 - 2] [i_8 - 1])) - (11506))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (var_5))))))));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 21; i_9 += 2) 
            {
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((min((var_4), (-1802432925))) == (var_4)));
                        var_25 = ((arr_30 [i_10 - 1] [i_8]) << (((((/* implicit */int) (unsigned short)34449)) - (34428))));
                    }
                } 
            } 
            arr_38 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((2147483647), (var_4))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (345733491)))))) ? (var_2) : (((/* implicit */unsigned int) min(((+(var_1))), (((((/* implicit */_Bool) var_13)) ? (var_13) : (var_13))))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_8)))))))) < (max((var_10), (max((var_8), (((/* implicit */unsigned int) var_4))))))));
}
