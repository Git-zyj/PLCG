/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58030
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_13);
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_15)), (var_8))))) + (max((var_7), (((/* implicit */long long int) (signed char)59))))))));
        var_16 = ((/* implicit */signed char) ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) == (13181221969269799650ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (min((0ULL), (((/* implicit */unsigned long long int) var_1)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])) ? (13181221969269799650ULL) : (((/* implicit */unsigned long long int) -5360152313852519703LL)))))) ? (((((unsigned int) var_9)) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-8180))))) : (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8U]))) > (2102274156U)))), (min((3211467933U), (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_3] [i_3] [i_4] [i_4]))))))));
                        var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) min((-5360152313852519724LL), (((/* implicit */long long int) (short)-8170)))))), ((+(((/* implicit */int) arr_3 [i_1]))))));
                        arr_18 [i_1] [i_2] [i_4] |= (!(((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_11 [i_1] [i_2] [i_3] [i_4])))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [10LL] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 + 1] [i_4])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)30708))) ^ (-5360152313852519703LL))) : (((/* implicit */long long int) var_9))))));
                    }
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_3] [i_2]))) ? ((~(5265522104439751963ULL))) : (((11382345246072378308ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8164)))))))) ? (((unsigned long long int) (short)31185)) : (((/* implicit */unsigned long long int) -12011217))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) var_5);
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */short) (-(((unsigned long long int) ((230635347U) + (arr_24 [i_5]))))));
                var_22 = ((/* implicit */unsigned long long int) 5360152313852519699LL);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            arr_31 [i_5] [i_6] [i_8] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_8] [i_7] [i_6] [i_5])) <= (((/* implicit */int) max((((/* implicit */unsigned short) (short)-28672)), (var_10)))))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 13181221969269799662ULL)) ? (min((12262679590348051918ULL), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_20 [i_5])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)8169)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (5360152313852519702LL)))));
}
