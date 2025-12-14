/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81395
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
    var_17 = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */long long int) var_5)) : (((long long int) (~(((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) ((var_13) <= (((/* implicit */int) (short)6144))))) <= (((/* implicit */int) (short)24506)))));
                        arr_11 [i_0] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */int) ((15094507578375582191ULL) & (((/* implicit */unsigned long long int) 2032391818))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_14 [i_0] [(short)15] = ((((((arr_13 [i_0]) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_0] [(_Bool)1])) + (32143))) - (27))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (arr_4 [i_0 + 1])))));
            var_18 = ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1])) ? (((var_15) << (((((((/* implicit */int) var_10)) + (66))) - (17))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (-1931018787)))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483645))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) (+((-((-(arr_3 [i_0 - 1] [i_5] [i_5])))))));
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_0 + 1] [i_5] [i_0] [i_5])))) - (((((/* implicit */_Bool) ((13835058055282163712ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0] [i_5]) >> (((-2032391799) + (2032391859)))))) : (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_5])))));
        }
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_22 = ((/* implicit */signed char) (-(((long long int) -2032391792))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) -1246276543);
    }
    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1071187700)) | (arr_20 [i_7]))) == ((-(8856703118978440344ULL))))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (281474976710652ULL))))) : (arr_18 [i_7] [i_7])))));
        arr_26 [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_7] [i_7]);
    }
    var_23 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (5466255697236805793ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (472999658)))) : (((-526121414028488610LL) + (((/* implicit */long long int) -1791731244)))))));
    var_24 = ((/* implicit */long long int) (-(18446462598732840958ULL)));
    var_25 = (~(((((((/* implicit */int) var_16)) | (((/* implicit */int) (_Bool)1)))) & ((~(var_5))))));
}
