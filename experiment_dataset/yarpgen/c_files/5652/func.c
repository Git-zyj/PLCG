/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5652
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
    var_12 = ((/* implicit */long long int) max(((unsigned short)36367), ((unsigned short)36396)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) (unsigned short)25484)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_13 = min((min(((+(-1667930522))), (2147483647))), (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (short)22248))))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) == (4989945138695659823LL)))) | (((((/* implicit */int) (signed char)125)) | (var_6)))));
                            var_15 ^= (!((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) | (((/* implicit */int) (unsigned char)164))))))));
                            arr_16 [i_0 + 3] [i_0] [13ULL] [i_0 - 1] = ((/* implicit */unsigned int) (unsigned short)25499);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 12; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((-3030367964164497169LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40051))))) == (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)239))))))))) | ((+(3209836423U)))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) (short)4726)));
                            var_18 ^= min(((unsigned char)122), (min(((unsigned char)222), (((/* implicit */unsigned char) (_Bool)0)))));
                            arr_25 [i_7] [i_5] [i_5] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)156)) ? (1998757354U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))))), (((((/* implicit */int) (short)20504)) - (((/* implicit */int) (signed char)-56))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (short i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) == (-5060433560218839536LL)));
                arr_31 [i_8] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3216048867U)))), ((unsigned char)177)));
            }
        } 
    } 
}
