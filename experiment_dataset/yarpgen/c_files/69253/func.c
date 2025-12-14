/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69253
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
    var_12 = ((/* implicit */unsigned char) -1815293559);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 -= ((/* implicit */signed char) ((_Bool) 739868690U));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_14 = (-(((/* implicit */int) (unsigned short)65535)));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)-26579))) ? (((/* implicit */int) (short)26579)) : ((-(((/* implicit */int) (short)8687))))));
                var_15 *= ((/* implicit */short) 2524698489U);
            }
            arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-26580)))));
            /* LoopSeq 1 */
            for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                arr_14 [i_0] [i_3] [(unsigned char)3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)110))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))) : (((/* implicit */int) (unsigned char)1))));
                var_16 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)0)))));
            }
        }
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)26579), (((/* implicit */short) (_Bool)1)))))))), (4294967295U))))));
        arr_18 [8U] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-523406498)))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned char)254))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967295U)))))))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (min((var_0), (((/* implicit */long long int) 14U)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)145)))))))));
        arr_19 [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 2147483647))) ? ((-((-(5832756570245987695ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_6] |= ((/* implicit */short) ((int) var_11));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((int) -889796581));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (716811479))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_31 [i_4] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (-((-(889796593)))));
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) : (((unsigned int) (_Bool)0))));
                            var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32752))));
                        }
                        var_22 ^= (+(((/* implicit */int) var_1)));
                        var_23 = ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) ^ (-889796591)))) ? (max((((/* implicit */int) (short)-32746)), (534823419))) : ((~(889796585)))));
                    var_25 = ((/* implicit */short) (+(((int) (unsigned short)27897))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_34 [i_4] [i_10] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)35)) ? (var_0) : (((/* implicit */long long int) 889796561)))), (((/* implicit */long long int) min(((short)-1637), ((short)-26568))))));
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (max((((/* implicit */unsigned int) var_1)), (2721361800U)))))) ? (((/* implicit */int) (_Bool)1)) : (max((-889796549), (((/* implicit */int) (unsigned char)29))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)13))) ? (((/* implicit */int) var_11)) : (889796585)));
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
        {
            arr_40 [i_11] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-18209)) : (var_6))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 4; i_13 < 8; i_13 += 4) 
            {
                arr_43 [10ULL] [i_12] [i_13] = ((/* implicit */unsigned char) ((signed char) (unsigned short)61483));
                arr_44 [(unsigned char)10] [6] [i_13 + 3] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)61477)) : (-1623409397)))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28352)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned short)4059)))))));
                arr_45 [i_12] = ((/* implicit */int) ((unsigned int) (!((_Bool)1))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17599982981263632406ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)4074))));
            }
            arr_46 [i_12] = ((/* implicit */_Bool) (~(1102915956)));
            var_30 ^= ((unsigned short) var_8);
        }
        for (short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (33U) : (((/* implicit */unsigned int) 889796587))))) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (signed char)-64))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_9)))))));
            var_33 = ((/* implicit */unsigned short) (+(((long long int) 1557780254U))));
        }
    }
    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) ((unsigned char) 3544180549847259623ULL))) ? (min((((/* implicit */int) (_Bool)1)), (1842937208))) : (((((/* implicit */_Bool) var_0)) ? (889796555) : (((/* implicit */int) var_3)))))))))));
}
