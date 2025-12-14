/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76493
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
    var_10 = ((/* implicit */short) var_9);
    var_11 = ((((/* implicit */long long int) min((((((/* implicit */_Bool) 3146487345969696327LL)) ? (834024543U) : (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 175457875)) && (((/* implicit */_Bool) -2608967882178374105LL)))))))) - ((+(var_8))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [(short)14] |= ((/* implicit */int) 230982271U);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) arr_6 [i_1] [i_0 + 3]);
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 + 4]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -1050336453)) : (17592186044415ULL)))));
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
            {
                arr_13 [i_3 + 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_2])), (-1LL)));
                var_14 = ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */_Bool) -1828435731101642658LL)) ? (((/* implicit */int) arr_7 [i_2])) : (var_2))))));
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) arr_5 [i_0]);
            }
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
            {
                var_15 = ((((((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) + (9223372036854775807LL))) << (((arr_1 [i_4 + 1]) - (4087394976549049871ULL))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_12 [i_5] [i_2] [i_5]))));
                    arr_22 [i_0] [i_0] [i_4 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) -5842017182832456830LL)) ? (-3791360846572069330LL) : (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_4])))) : (((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2])))))));
                    arr_23 [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_5]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(arr_16 [i_0] [i_0] [i_0])))) < (16321148582437534989ULL)));
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_27 [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    var_18 = ((/* implicit */unsigned long long int) (~(((-1864369761) + (((/* implicit */int) arr_26 [i_6] [i_2]))))));
                }
                arr_28 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_4 + 2])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) (unsigned short)57203))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_4]))) <= (1893546115U)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2])))))));
            }
        }
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        var_20 = ((/* implicit */int) arr_31 [i_7]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (max(((-(var_6))), (((((/* implicit */_Bool) var_9)) ? (arr_31 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7])))));
    }
    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_44 [i_9] [i_10] = ((/* implicit */signed char) min((((arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1]) << (((arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 2]) - (5855489495566136455LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3377633858U)) ? (arr_19 [i_8] [i_8] [i_9] [i_9] [i_9] [i_9 - 2]) : (arr_19 [i_8] [i_8] [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 1]))))));
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) 8848279435855635739ULL)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294967295U)))) ? (min((((/* implicit */unsigned int) -668466746)), (960276130U))) : (arr_0 [i_8]))))));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        arr_48 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */signed char) arr_41 [i_8] [i_9] [i_10]);
                        var_23 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)24861)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_12]))) : (-2143263177679574838LL)))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_12 [i_9] [i_9] [i_10]))))))) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9 + 2])));
                        var_24 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -449821602)) ? (((/* implicit */int) var_7)) : (arr_32 [i_9 - 2]))));
                    }
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */long long int) var_5)), (-8853851572143055091LL))), (((/* implicit */long long int) arr_4 [i_9] [i_9])))))));
                    arr_49 [i_10] [i_9] [i_9] [i_8] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) arr_35 [i_8]);
        var_27 = 4294967293U;
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (unsigned short)16229))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */long long int) ((/* implicit */int) (short)1))) / (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))))))));
}
