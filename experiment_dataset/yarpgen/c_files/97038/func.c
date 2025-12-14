/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97038
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
    var_19 ^= ((/* implicit */unsigned char) 32764);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), ((~(var_12)))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(arr_7 [5])))) & (((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) 32764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_3])))) : (((((/* implicit */_Bool) 5391010125372243102ULL)) ? (((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_3])) : (var_10)))));
                        var_22 += ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_15 [5LL] [i_0] [i_1] [(short)1] = ((/* implicit */short) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (-32765)))), (((((/* implicit */_Bool) (signed char)-118)) ? (-5476883903282921216LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [1LL] [(short)18] [i_5])) - (((/* implicit */int) (signed char)82))))) : (((long long int) arr_11 [9] [i_1] [i_5] [(signed char)16])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)0) ? (arr_0 [i_0] [i_1]) : (0))))))));
                        arr_16 [(short)5] [i_1] [i_4] [(unsigned char)9] = ((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (var_8)));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)18590)) + (((/* implicit */int) var_2)))) - (((/* implicit */int) arr_7 [14ULL]))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (16711642471827947574ULL))) << (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (17936812456514480308ULL))))));
            arr_20 [11ULL] &= ((((/* implicit */_Bool) ((((int) (short)-28028)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (arr_1 [i_0] [i_6])))))) ? (((arr_3 [i_0] [i_6] [i_6]) ? (((/* implicit */int) arr_3 [(unsigned short)5] [i_6] [i_0])) : (((((/* implicit */int) (unsigned short)62696)) & (((/* implicit */int) var_11)))))) : (arr_1 [i_0] [(_Bool)1]));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) (unsigned short)11);
                        var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)62356)) ? (32764) : (((/* implicit */int) ((short) (signed char)-126))))), (((/* implicit */int) (unsigned short)62338))));
                        arr_25 [(signed char)19] [(signed char)19] [i_7] = ((/* implicit */unsigned short) min((((((max(((-2147483647 - 1)), (arr_14 [10] [5LL] [i_7] [i_7] [i_7] [(short)17]))) + (2147483647))) << (((((var_17) + (476918319))) - (15))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (17936812456514480308ULL)))) ? (arr_22 [i_8] [i_6] [(_Bool)1]) : (((/* implicit */int) (signed char)102))))));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_19 [6] [i_9] [i_9]))));
            var_29 = ((/* implicit */unsigned long long int) arr_12 [(signed char)7] [i_0] [i_9]);
        }
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_30 [i_0] [i_0] [i_10] = ((((/* implicit */_Bool) arr_22 [i_0] [i_10] [7U])) ? (((/* implicit */int) arr_7 [i_10])) : (((/* implicit */int) ((signed char) arr_18 [(unsigned short)11] [i_10] [i_0]))));
            arr_31 [i_10] [11] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) >= (min((arr_22 [(_Bool)1] [i_10] [(_Bool)1]), (((/* implicit */int) var_18))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [(_Bool)1]) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((_Bool) arr_10 [i_0] [(unsigned short)19] [i_0] [i_0]))) : ((-(((/* implicit */int) (_Bool)0))))))));
        }
        var_30 &= ((((((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) & (((/* implicit */int) ((signed char) (unsigned short)58849))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_15), (((/* implicit */signed char) arr_10 [(unsigned short)0] [i_0] [i_0] [i_0]))))))));
        var_31 = ((/* implicit */_Bool) (+(min((((((/* implicit */int) (short)-23715)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
        arr_32 [i_0] = ((/* implicit */int) 3482235670U);
        var_32 += ((/* implicit */signed char) 509931617195071309ULL);
    }
    var_33 += ((/* implicit */short) var_18);
}
