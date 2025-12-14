/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88232
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
    var_10 = ((/* implicit */_Bool) var_9);
    var_11 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_2))));
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 2111223215U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) * (((((/* implicit */_Bool) (unsigned short)64459)) ? (((/* implicit */unsigned long long int) 4084672867U)) : (9425318995198698942ULL)))))));
        }
        for (unsigned char i_2 = 4; i_2 < 17; i_2 += 3) 
        {
            var_14 = ((/* implicit */int) ((((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) < (((/* implicit */int) (((_Bool)1) && ((_Bool)0))))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (signed char)-1);
        }
        arr_10 [i_0] = ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) 210294428U)), (10797743201803842737ULL))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_15 += ((/* implicit */unsigned short) var_0);
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_21 [i_6] [i_5] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294705152U)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((signed char) var_2))) * (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)30)))))))));
                        arr_22 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31085)) ? (min((10278390516711135208ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-2344955611780511667LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_4] [i_5] [i_4] [i_5])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4084672871U) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
            arr_23 [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34451)) ? (((/* implicit */int) (unsigned short)44570)) : (((/* implicit */int) (signed char)120))))) : (min((-641227963048499923LL), (((/* implicit */long long int) 1610612736)))))));
            var_16 = ((/* implicit */short) arr_6 [i_4] [i_4] [i_3]);
            var_17 = ((/* implicit */unsigned short) max((var_17), (arr_16 [i_3] [i_3] [i_3])));
            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((1687588700) >> (((((/* implicit */int) (short)3840)) - (3823)))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) : (2647422281U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38290)) | (((/* implicit */int) arr_1 [i_4]))))))) & (((((/* implicit */_Bool) (unsigned short)43943)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))) : (262156U)))));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    {
                        arr_32 [i_9] [i_8] [i_7] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) == (-1557740580)));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_9))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) arr_16 [i_3] [i_8 + 1] [i_9]);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 4294705152U))));
                            var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) var_3))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            arr_37 [i_3] [i_7] [i_11] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_31 [i_8] [i_8] [i_8 + 1])) % (((/* implicit */int) (unsigned short)34467)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -3162439828898660330LL)) == (5615847227570196172ULL))))));
                            var_23 = ((/* implicit */signed char) 0ULL);
                        }
                        var_24 = ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59897))) : (5377067526491732778LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8]))));
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)44492))))));
                    }
                } 
            } 
            arr_38 [i_3] = ((/* implicit */unsigned char) ((arr_5 [i_3]) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (8388480U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(-622147567555233705LL)))) || (((/* implicit */_Bool) 9879986082117352052ULL))))))));
        }
        for (int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            arr_41 [i_3] [i_3] = ((/* implicit */int) max((max((((/* implicit */unsigned int) -1)), (arr_33 [i_3] [i_12] [i_12] [i_12] [i_12]))), ((~(arr_33 [i_12] [i_12] [i_12] [i_3] [i_3])))));
            arr_42 [i_3] [i_12] [i_12] = ((/* implicit */unsigned short) ((long long int) max((-2074311055), (arr_7 [i_3] [i_12]))));
        }
        for (short i_13 = 2; i_13 < 14; i_13 += 4) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((short) (unsigned short)33175)), (((/* implicit */short) arr_5 [i_13 - 2]))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) arr_28 [i_3] [i_13]))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)-1)) : (1))))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    for (unsigned short i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)4)) / (((/* implicit */int) arr_26 [i_3])))), (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1502666886U)) ? (((/* implicit */long long int) var_8)) : (-6163659374979783184LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -2074311055)) : (12895236703256335733ULL))) : (((/* implicit */unsigned long long int) var_0))))));
                            arr_53 [i_16] [i_16] [i_16] [i_14] [i_14] [i_13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 1815196841184303327LL)) ? (((/* implicit */unsigned long long int) 4286578816U)) : (arr_49 [i_13 - 1] [i_16 + 2] [i_14] [i_15] [i_16] [i_16])));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned char)176)), (var_0))))) == (1680204059)));
                            arr_54 [i_14] [i_13] [i_13] = ((/* implicit */long long int) max((879160455), (1)));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */signed char) 939524096);
        arr_55 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))) : (min((((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3])), (8566757991592199563ULL)))));
    }
    var_30 = ((/* implicit */signed char) -2074311055);
}
