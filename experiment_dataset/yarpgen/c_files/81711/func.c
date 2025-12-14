/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81711
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0])))) * (((((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1])) ? (((/* implicit */long long int) var_19)) : (arr_6 [i_0] [i_1]))) >> (((arr_6 [i_0] [i_0]) - (2508357079314850341LL)))))));
                arr_7 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_5 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_21 = ((((/* implicit */_Bool) (short)-15160)) ? ((((+(((/* implicit */int) (short)15160)))) / (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (short)-15150)))));
                            var_22 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_7))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (signed char)-88)))))) : ((-(arr_4 [i_2] [2U])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_4 [i_2] [i_2])))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_3])))))))) : (max(((-(((/* implicit */int) (signed char)105)))), (((/* implicit */int) arr_8 [i_2 + 1] [(short)9] [i_2] [i_3])))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_4))));
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [14LL])) ? (((/* implicit */int) (short)-15135)) : (((/* implicit */int) (short)15160))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) : (arr_3 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_18);
    var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-105)) && (((/* implicit */_Bool) var_6)))) && ((!(((/* implicit */_Bool) (signed char)115)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 429216298U)))))) : (((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        arr_18 [i_4] [(short)11] = ((/* implicit */unsigned short) (+(429216298U)));
        arr_19 [i_4] = ((/* implicit */unsigned char) (((-(var_1))) / (((/* implicit */long long int) var_15))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                {
                    {
                        arr_29 [i_5] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) 891899598))))));
                        var_25 = ((/* implicit */unsigned char) (-(var_7)));
                        arr_30 [i_4] [i_5] [i_4] [15LL] = ((/* implicit */short) ((signed char) (short)15160));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) (short)15145)) % (((/* implicit */int) (short)-21198))))));
                    }
                } 
            } 
        } 
        var_27 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_4] [11LL] [(signed char)7])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)15153)) >> (((((/* implicit */int) var_8)) - (7507)))))) : (-942612743732546813LL)));
        var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2609801818U)) ? (942612743732546795LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))));
    }
}
