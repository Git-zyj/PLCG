/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93938
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
    var_18 = ((/* implicit */long long int) ((unsigned short) min(((+(5503023161273707942ULL))), (((/* implicit */unsigned long long int) var_4)))));
    var_19 = ((/* implicit */unsigned short) (short)25709);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_10)))))));
                    var_21 = min((max((arr_0 [i_1 - 1]), (((/* implicit */int) arr_7 [i_1 + 3] [i_2 - 1] [i_2 - 1])))), (arr_0 [i_1 - 1]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_22 |= ((/* implicit */short) ((unsigned long long int) (short)20122));
                        arr_16 [(signed char)11] = ((/* implicit */short) min(((signed char)27), ((signed char)-37)));
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -103903042)) ? (((/* implicit */unsigned long long int) -7648192529723533611LL)) : (5399515491640953436ULL))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [(unsigned short)5])), (7648192529723533610LL))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_6 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 3]))) > (((((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)-101)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((var_25), (arr_13 [i_0] [i_0] [i_0] [i_0])));
        arr_17 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)5] [i_0])) : (((/* implicit */int) (unsigned short)61817))))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_15 [(_Bool)1] [(signed char)15] [16LL] [i_0] [(short)0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        arr_21 [i_6] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned short)10965)))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_20 [(unsigned char)0])) : (((/* implicit */int) (unsigned char)67))))) || (((/* implicit */_Bool) arr_20 [i_6]))));
    }
    var_27 |= ((/* implicit */unsigned char) var_3);
}
