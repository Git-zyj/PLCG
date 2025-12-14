/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59384
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (min((((/* implicit */short) (signed char)23)), ((short)-5852)))));
        var_19 = min((((/* implicit */int) arr_0 [i_0])), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [6])))), ((-(((/* implicit */int) (signed char)-33)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_10 [i_3] [i_1] [(signed char)8] [i_1] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)21)), (((539040391) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))) / ((+(min((var_12), (((/* implicit */unsigned int) var_0))))))));
                        arr_11 [i_1] [i_2] [14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)161), ((unsigned char)74))))) : (arr_4 [(unsigned char)6] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2LL] [20ULL] [i_2]))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [10ULL] [i_1] [i_2] [i_3])) : (var_8)))), (var_9)))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1])))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [(unsigned short)15] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(2931221446U)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-3210197350717784827LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_10))))))));
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (signed char)80))));
        var_22 = ((/* implicit */unsigned long long int) var_1);
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_4] [16ULL] [i_4] [1LL])) ? (min((min((1833857725581854234ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_2 [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [18])))));
    }
    for (int i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        arr_18 [i_5] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) arr_3 [i_5] [i_5] [(unsigned short)20])), (var_6))), (((/* implicit */unsigned short) ((unsigned char) var_4))))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(347921264)))) ? (((/* implicit */int) arr_15 [i_5])) : (-1962732580)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-117)), (arr_16 [i_5])))) ? (((/* implicit */int) arr_0 [1ULL])) : (((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) (unsigned short)41492))));
        arr_19 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (arr_9 [i_5 + 2] [4] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))) : (((((/* implicit */_Bool) min((arr_17 [i_5]), (((/* implicit */unsigned int) -2003312355))))) ? (min((11830296797348205377ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) <= (6758471449197241643LL)))))))));
    }
    var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((var_11) & (((/* implicit */int) (_Bool)1))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)385))))))));
    var_26 = ((/* implicit */unsigned short) (!((_Bool)1)));
}
