/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7031
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (min((((/* implicit */unsigned long long int) (short)-14614)), (11684733136468101828ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14614)) ? (((/* implicit */int) (short)14601)) : (((/* implicit */int) (short)(-32767 - 1))))))))) ? (31792183U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)8128)) ? (((/* implicit */int) (short)14601)) : (((/* implicit */int) (short)-25459)))), (((/* implicit */int) (unsigned short)29744))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)12980), ((short)-12981))), (min((((/* implicit */short) (unsigned char)255)), ((short)11152))))))) : (((((/* implicit */_Bool) (short)-22870)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)14601)), (3090946316U)))) : (((((/* implicit */_Bool) 1462854389U)) ? (((/* implicit */unsigned long long int) 4294967278U)) : (11854033586551462065ULL)))))));
            }
        } 
    } 
    var_22 |= (short)-12974;
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)28110)), (max((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (_Bool)1))))))));
                var_24 ^= ((/* implicit */_Bool) (unsigned char)19);
            }
        } 
    } 
}
