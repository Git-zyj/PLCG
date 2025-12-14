/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68233
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) var_13);
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned long long int) (+((+(((/* implicit */int) var_11))))))))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) min(((short)(-32767 - 1)), (var_7)))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 758268219U)) ? (2769909078U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) - (min((((/* implicit */unsigned long long int) var_9)), (var_2))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)173)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    arr_18 [i_3] [i_3] = ((/* implicit */int) var_4);
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? ((~(13086708980319291990ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                    var_19 -= ((/* implicit */unsigned int) var_13);
                    var_20 ^= ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-12607))))))) ? (((/* implicit */unsigned int) ((((-1835851241) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((((/* implicit */_Bool) 4426003231923562372ULL)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)30318))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        arr_21 [i_6] [i_6 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)30318))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+((+(((/* implicit */int) (short)30308)))))))));
        arr_22 [i_6] = ((/* implicit */signed char) var_4);
    }
    for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-6765)) : (((/* implicit */int) (short)4080))))) ? (((((/* implicit */int) (unsigned char)83)) | (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) ((-1416835748) > (((/* implicit */int) (unsigned char)190))))))))));
        arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) ((short) (-(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)237))))) > ((+(var_13))))))));
        var_23 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) == (((/* implicit */int) (unsigned char)248)))));
        var_24 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((2251799813683200ULL), (((/* implicit */unsigned long long int) var_0))))))) ? (-1416835748) : (((((/* implicit */_Bool) (unsigned short)36939)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) var_4))))));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(max((max((((/* implicit */int) var_7)), (1316909165))), (((/* implicit */int) var_5)))))))));
}
