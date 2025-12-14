/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75842
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
    var_17 = (unsigned char)23;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_18 |= (unsigned char)0;
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0 + 1] [i_0]))) ? ((~(-6956577281962849116LL))) : (((8361269095793689585LL) << (((((/* implicit */int) (short)32761)) - (32761)))))))) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [(unsigned char)11] [i_1] |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) >= (arr_3 [i_1] [i_1])))) == (((/* implicit */int) arr_4 [i_1]))));
        var_19 = ((/* implicit */unsigned short) 8361269095793689561LL);
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) -714657783);
            var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))) >= (9223372036854775807LL)));
            var_22 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (0U) : (((/* implicit */unsigned int) arr_9 [i_1] [i_2])))));
        }
        for (int i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
        {
            var_23 += ((/* implicit */short) (+(arr_3 [i_3 - 1] [i_3 - 1])));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (signed char i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) 10218225479004288180ULL);
                        var_25 += ((/* implicit */unsigned char) ((((_Bool) -286325454)) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)12])) ? (2055814696) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))));
                        arr_17 [i_1] [i_3] [i_1] [i_5 - 4] = (!(((/* implicit */_Bool) ((16382) >> (((var_9) - (2590023192190868450LL)))))));
                        var_26 = ((/* implicit */signed char) ((int) 1827312922343363187ULL));
                        arr_18 [i_1] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_4] [(short)9] [i_4] [i_1] [(signed char)7])) ? (32767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        var_27 = ((/* implicit */signed char) (-(((min((1827312922343363187ULL), (((/* implicit */unsigned long long int) (signed char)82)))) | (((/* implicit */unsigned long long int) max((arr_9 [(short)4] [i_6]), (((/* implicit */int) var_1)))))))));
        var_28 = (-(((((_Bool) arr_4 [i_6])) ? (6158720633344256740LL) : (((/* implicit */long long int) ((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) 2144613273U)))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) -243690671))) ? (((541165879296ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6])) ? (-8507795172301274503LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))))));
        arr_23 [i_6] = (~(min((max((((/* implicit */unsigned long long int) arr_20 [i_6] [i_6])), (arr_8 [i_6]))), (((/* implicit */unsigned long long int) min((8361269095793689562LL), (var_2)))))));
        var_29 = ((/* implicit */signed char) min((((/* implicit */int) (short)-17774)), (((((((/* implicit */int) var_16)) & (((/* implicit */int) var_11)))) ^ (((arr_9 [i_6] [i_6]) | (((/* implicit */int) var_8))))))));
    }
    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_27 [i_7] [i_7] = var_11;
        arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_24 [i_7])) | (8459404910888898289ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18130)))))) % (max((((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)247)) : (2046))), (((((/* implicit */int) (unsigned char)49)) ^ (((/* implicit */int) (_Bool)0))))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            {
                var_30 = ((/* implicit */unsigned short) (unsigned char)224);
                var_31 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_9]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)4465)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8])) ? (-1) : (((/* implicit */int) (unsigned short)64240))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (-6819943685055342912LL)))));
            }
        } 
    } 
    var_32 = var_15;
}
