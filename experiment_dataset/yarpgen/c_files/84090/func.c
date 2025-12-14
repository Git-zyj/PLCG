/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84090
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned short) 13228607879475439075ULL))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4408))) ^ (2546936182629162777ULL)))));
                            arr_10 [i_0] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4074227340374202472ULL)) ? (15899807891080388839ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((int) (signed char)-33));
                arr_12 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) -3387018915775594578LL)))))))));
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-25050)) + (((/* implicit */int) (unsigned short)45907)))) - (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)5]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            {
                var_14 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 346728304693519366ULL)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (signed char)-127))))));
                var_15 = ((/* implicit */int) (-(15899807891080388838ULL)));
                arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)32767))) ? ((+(((/* implicit */int) (short)-14667)))) : (((/* implicit */int) arr_17 [i_4]))));
                arr_19 [(signed char)14] &= ((/* implicit */unsigned long long int) var_11);
            }
        } 
    } 
}
