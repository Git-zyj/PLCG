/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91945
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
    var_11 = ((int) ((((/* implicit */int) var_5)) == (((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) (unsigned short)17911))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)17906), ((unsigned short)17911)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) / (var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) / (var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0] [(unsigned char)18])) / (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_2 [i_0]))))));
        var_13 = (unsigned short)65535;
        var_14 = ((/* implicit */unsigned char) ((var_3) ^ (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0])) % (-675800401)));
            var_15 *= ((/* implicit */unsigned long long int) (~(var_8)));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) != (var_8)))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_1)) - (48549)))))) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */int) (unsigned short)17911)) - (165270573)))));
        }
        for (int i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            arr_16 [(unsigned short)6] = ((/* implicit */unsigned long long int) var_7);
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) 751096442);
            arr_18 [i_0] [i_3 - 2] = arr_5 [i_0] [i_0] [i_3 + 1];
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_17 = ((unsigned short) arr_9 [i_0] [20ULL]);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 8298231377209686885ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_2)))))) : (arr_11 [i_0] [(unsigned short)10])));
            var_19 += ((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))));
        }
    }
    var_20 = min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) (unsigned char)92))) : (-751096442))), (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_5))))), ((unsigned short)64239)))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                arr_28 [i_5] [i_6] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5]))) : (var_6)))))) ? (((/* implicit */int) ((unsigned char) max((arr_21 [i_6] [i_5]), (((/* implicit */unsigned long long int) var_9)))))) : (var_8)));
                var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_6])) ? (((/* implicit */int) arr_24 [i_6] [i_6])) : (((/* implicit */int) arr_24 [i_5] [i_6])))))));
            }
        } 
    } 
}
